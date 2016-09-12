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

        <?php if (!empty($content[group_wrapper][body])): ?>
            <?php print $ds_content ?>
        <?php else: ?>
            <?php print render($content[title]); ?>
            <?php print render($content[post_date]); ?>
            <?php print render($content[field_newsletter_paragraph][0][entity][paragraphs_item][82][field_pg_content_body]); ?>
            <?php print render($content[group_wrapper][node_link]); ?>
            <?php print render($content[field_blogpost_categories]); ?>
        <?php endif; ?>
    </<?php print $ds_content_wrapper ?>>
<?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
<?php endif; ?>
