<?php
/**
 * @file
 * Parliamentwatch theme implementation for user search results.
 *
 */
$profile_link = parse_url($row->_entity_properties['url'], PHP_URL_PATH);
if (!empty($row->_entity_properties['entity object']->field_user_picture)){
  $image_url = theme('image_style', array(
    'style_name' => 'pw_portrait_m', //Configure style here!
    'path' => $row->_entity_properties['entity object']->field_user_picture['und'][0]['uri'],
  ));
}
else {
  $image_url = theme('image_style', array(
    'style_name' => 'pw_portrait_m', //Configure style here!
    'path' => "public://default_images/img_fotodummy_210x140.jpg",
  ));
}
$has_title = (bool) $row->_entity_properties['entity object']->field_user_title['und'][0]['value'];
$title = $row->_entity_properties['entity object']->field_user_title['und'][0]['safe_value'];
$fname = $row->_entity_properties['entity object']->field_user_fname['und'][0]['safe_value'];
$lname = $row->_entity_properties['entity object']->field_user_lname['und'][0]['safe_value'];
$party = taxonomy_term_load($row->_entity_properties['entity object']->field_user_party['und'][0]['tid'])->name;
$parliament = taxonomy_term_load($row->_entity_properties['entity object']->field_user_parliament['und'][0]['tid'])->name;
  $constituencies = array();
  foreach ($row->_entity_properties['entity object']->field_user_constituency['und'] as $key => $value) {
    $consituency_term = taxonomy_term_load($value['tid']);
    $constituencies[] = $consituency_term->name;
  }
  $constituency = implode(', ', $constituencies);

#$constituency = taxonomy_term_load($row->_entity_properties['entity object']->field_user_constituency['und'][0]['tid'])->name;

$questions_get = $row->_entity_properties['field_user_questions_get'];
$answers_give = $row->_entity_properties['field_user_answers_give'];
?>
<hr/>
<div class="ds-1col <?php print $classes; ?> clearfix">
  <div class="grid-2 alpha">
    <div class="arrow-item">
      <a href="<?php print $profile_link;?>">
        <?php print $image_url;?>
      </a>
    </div>
  </div>
  <div id="user_user_search_result_group_grid_6" class="field-group-format group_grid_6 field-group-div group-grid-6 grid-6 omega speed-fast effect-none">
    <?php if($has_title): ?><strong class="field-title"><?php print $title;?>&nbsp;</strong><?php endif; ?><strong class="field-fname"><?php print $fname;?>&nbsp;</strong><strong class="field-lname"><?php print $lname;?>,&nbsp;</strong><?php print $party;?>
    <div class="small"><?php print $parliament; print (!empty($constituency))?"&nbsp;&ndash;&nbsp;".$constituency:"";?></div>
  </div>
  <div class="text-right">
        <span class="link-profile"><a href="<?php print $profile_link;?>">Profil öffnen</a>
        </span>
  </div>
</div>
