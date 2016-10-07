<?php

/**
 * @file
 * Display Suite 3 column 25/50/25 template.
 */
?>

<?php if (isset($title_suffix['contextual_links'])): ?>
<?php print render($title_suffix['contextual_links']); ?>
<?php endif; ?>

<td width="500" class="block_td percent_td">
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="transparent" width="500" align="center" class="deviceWidthInner">
        <tr>
            <td width="70" style="vertical-align: top;">
                <?php print $left; ?>
            </td>
            <td width="20">&nbsp;</td>
            <td width="390" style="vertical-align: top;">
                <blockquote style="font-family: 'Times New Roman', Times, serif; font-size: 18px; line-height: 22px; font-style: italic; color: #4d4d4d; margin: 0; padding: 0;">
                    <span style="color: #999; font-family: Georgia,Times New Roman,Times,serif; font-size: 20px;">„</span><?php print $middle; ?><span style="color: #999; font-family: Georgia,Times New Roman,Times,serif; font-size: 20px; ">“</span>
                </blockquote>
            </td>
            <td width="20">&nbsp;</td>
        </tr>
        <tr>
            <td colspan="4" width="600" style="height: 10px; font-size: 10px;">&nbsp;</td>
        </tr>
    </table>
    <table cellpadding="0" cellspacing="0" border="0" bgcolor="transparent" width="500" align="center" class="deviceWidthInner">
        <tr>
            <td width="500">
                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #999; font-size: 11px; line-height: 19px; margin: 0 0 10px;"><?php print $right; ?> ist eines von <span id="mscount"><?php print $count_memberships; ?></span> Förderinnen und Förderern von abgeordnetenwatch.de</p>
            </td>
        </tr>
    </table>
</td>

<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>