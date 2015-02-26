<?php
switch ($field_petition_partner['und'][0]['value']) {
  case "":
    $partner_html = "";
    $signing_url = $node_url;
    $sharethis = '<img src="https://ws.sharethis.com/images/sharethis_counter.png">';
    break;
  case "change.org":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-change.png" width="119" height="23" alt="Change.org">';
    $signing_url = $field_petition_external_url['und'][0]['url'];
    $node_url = $signing_url;
    break;
  case "openpetition":
    $partner_html = '<img src="/sites/all/themes/custom/parliamentwatch/images/logo-openpetition.png" width="119" height="36" alt="OpenPetition">';
    $signing_url = $field_petition_external_url['und'][0]['url'];
    $node_url = $signing_url;
    break;
}
$themed_image = theme_image_style(array(
  'style_name' => 'pw_landscape_l', //Configure style here!
  'path' => $field_teaser_image['und'][0]['uri']
));
?>
<?php if ($sharethis): ?>
	<div class="sharethis-wrapper">
		<? echo $sharethis; ?>
	</div>
<?php endif; ?>
<h2 class="push-bottom-l">
	<ul class="progress-icons">
		<li><i class="icon-signing aw-icon-1x aw-icon-circle aw-icon-circle-brand"><span class="element-invisible"><?php print t('Unterschriften werden gesammelt');?></span></i></li>
		<li><i class="icon-microphone aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition in der Meinungsumfrage');?></span></i></li>
		<li><i class="icon-politician aw-icon-1x aw-icon-circle aw-icon-circle-disabled"><span class="element-invisible"><?php print t('Petition im Parlament');?></span></i></li>
	</ul>
	<? echo "<a href=\"".$node_url."\">".$title."</a>"; ?>
</h2>
<div class="petition-list-image-wrapper img-outline">
    <a href="<? echo $node_url; ?>" title="zur Petition">
    	<? echo $themed_image; ?>
    </a>
    <?php //if ($field_image_copyright): ?>    
    <div class="copyright">
		<? echo $field_teaser_image['und'][0]['field_image_copyright']['und'][0]['value'] ?>
	</div>
	<?php //endif; ?>
</div>
<div class="pw-petition-list-contents">
    <div class="pw-petition-progress-wrapper-m push-bottom-s">
    	<span style="width: <? echo $field_petition_progress['und'][0]['value']; ?>%;" class="pw-petition-progress-m">Fortschritt: <? echo $field_petition_progress['und'][0]['value']; ?>%</span>
    </div>
    <div class="medium">Benötigte Unterschriften: <? echo $field_petition_required['und'][0]['value']; ?></div>
    <div class="small light">Erhaltene Unterschriften: <? echo $field_petition_signings['und'][0]['value']; ?></div>
    <?php if ($partner_html): ?>
    	<div class="petition-list-partner-wrapper small light">
    		<p>Diese Petition läuft auf:</p>
    		<? echo $partner_html; ?>
    	</div>
    <?php endif; ?>
    <div class="petition-list-sign-wrapper"><a href="<? echo $signing_url; ?>" class="button">Unterschreiben</a></div>
</div>