<?
//todo: field_get_items benutzen

//$comments = render(comment_node_page_additions($node)['comments']);

// ====================== ACTUAL THEME ===========================
?>
<article<?php print $attributes; ?>>
<div class="sharethis-wrapper">
  <span class="st_sharethis_hcount" st_url="https://www.abgeordnetenwatch.de<?php print $node_url; ?>" st_title="<?php print $title; ?>" displayText="sharethis"></span>
</div>
<div class="push-bottom-m">
  <p>
  <?php
    $block = module_invoke('block', 'block_view', '12');
    print render($block["content"]);
  ?></p>
  <p class="medium">Adressat: <?php print $field_petition_recipient[0]['value'] ?></p>
  <?php if (!empty($field_blogpost_categories)): ?>
    <p class="icon-taxonomy push-bottom-m">
      <?php
      print _pw_get_linked_terms($field_blogpost_categories);
      ?>
    </p>
  <?php endif; ?>
  <div class="clearfix push-bottom-l managed-content">
    <?php print $body[0]['value']; ?>
  </div>
</div>
<div class="pw-progress-wrapper pw-progress-wrapper-l grid-5 alpha">
  <div class="pw-progress" style="width: <?php print $field_petition_progress[0]['value'];?>%;"></div>
</div>
<div class="medium clear"><h4 class="label-inline">Benötigte Unterschriften:&nbsp;</h4><strong><?php print number_format($field_petition_required[0]['value'],0,',','.'); ?></strong></div>
<div class="light small push-bottom-l"><?print number_format($field_petition_signings[0]['value'],0,',','.')?> unterstützen die Petition</div>
<div class="push-bottom-l">
  <h3>Petition unterschreiben</h3>
  <blockquote><?php print $field_petition_content[0]['value']; ?></blockquote>
  <?php print theme('status_messages'); ?>
  <?php print $main_node_form; //todo: Ordentliche CSS-Klasse anstelle der Wiederverwendung von "comment"?>
</div>
<?php
$block = module_invoke('block', 'block_view', '12');
print render($block["content"]);
?>
<?php
  // render comments if there are any
if ($comments):
  ?>
<div id="comments" class="comment-wrapper">
  <h3>Ich habe die Petition unterschrieben, weil...</h3>
  <?php print $comments; ?>
</div>
<?php endif; ?>
</article>
