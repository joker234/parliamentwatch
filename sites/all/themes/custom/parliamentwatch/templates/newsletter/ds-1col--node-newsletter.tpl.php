<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

<?php if (isset($title_suffix['contextual_links'])): ?>
<?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">
<div id="body_style" style="padding:10px">
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-bottom: 1px solid #f63;">
        <tr>
            <td width="600">
                <?php print $ds_content; ?>
            </td>
        </tr>
    </table>
</div>
</<?php print $ds_content_wrapper ?>>


<?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
<?php endif; ?>
