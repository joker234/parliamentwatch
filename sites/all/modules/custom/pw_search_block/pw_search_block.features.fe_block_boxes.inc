<?php
/**
 * @file
 * pw_search_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_search_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'PW Search Block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'pw_search_block';
  $fe_block_boxes->body = '<form method="get" id="pw_search_block">
<input type="text" name="keyword" id="pw_search_block_keyword" />
<?php 
$term = _pw_get_current_parliament_term(); // retrieves Parliament ID from views
$parliamentId = (int)$term->tid;
if ($parliamentId == 0) {
  $pathArr = explode(\'/\', current_path()); // for profile/<parliament-name>/<politician-role>
  if (array_key_exists(1, $pathArr)) {
    $taxonomyArr = taxonomy_get_term_by_name($pathArr[1], \'parliaments\');
    foreach ($taxonomyArr as $key => $val) {
      $parliamentId = $key;
      break;
    }
  }
}
$doSearchParliament = false;
if ($parliamentId != 0) { // set facet parameter only if parliament ID is ready:
  $doSearchParliament = true;
?>
<input type="hidden" name="f[0]" id="pw_search_block_facet" value="im_field_user_parliament:<?php echo $parliamentId; ?>">
<?php } ?>
<?php
if ($doSearchParliament) {
  echo \'<input type="radio" name="pw_search_block_where" value="parliament" id="pw_search_block_where_parliament" checked="checked"> Parliament<br>\';
}
?>
<input type="radio" name="pw_search_block_where" value="whole_platform"> Whole Platform<br>
<input type="submit" name="submit" id="pw_search_block_submit">
</form>
<script language="javascript">
jQuery( "#pw_search_block" ).submit(function( event ) {
  keyword = jQuery("#pw_search_block_keyword"); // obtain user-entered search keyword
  jQuery( "#pw_search_block" ).get(0).setAttribute(\'action\', "/search/site/" + encodeURIComponent(keyword.val())); // reset form action
  if (jQuery("#pw_search_block_where_parliament").attr("checked") != "checked") { // do not pre-select facet if parliament is not checked:
    jQuery("#pw_search_block_facet").remove();
  }
  jQuery("#pw_search_block_submit").remove(); // remove unnecessary parameter from the GET string
  keyword.remove(); // remove unnecessary parameter from the GET string
  jQuery("input[name=\'pw_search_block_where\']").remove();
});
</script>
';

  $export['pw_search_block'] = $fe_block_boxes;

  return $export;
}
