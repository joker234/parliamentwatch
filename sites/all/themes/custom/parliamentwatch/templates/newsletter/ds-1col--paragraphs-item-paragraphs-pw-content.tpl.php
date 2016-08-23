<?php if (!empty($content['field_pg_content_link'])): ?>
  <?php $node_url=url($field_pg_content_link[0]['url'], array('absolute' => TRUE)); ?>
<?php endif; ?>
<div class="<?php print render($content['field_pg_donate_targetgroup']); ?>">


  <?php if (!empty($content['field_pg_content_link'])): ?>
  <div class="social-media">
    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook" target="_blank">facebook</a>
    <a href="https://twitter.com/intent/tweet?text=<?php print $field_pg_content_title[0]['safe_value']; ?>&url=<?php print $node_url; ?>" class="twitter" target="_blank">twitter</a>
  </div>
  <?php endif; ?>
  <?php hide($content['field_pg_class']); ?>
  <?php hide($content['field_pg_content_title']); ?>
  <?php hide($content['field_pg_content_img']); ?>
  

    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth">
        <tr>
            <td colspan="3" width="100%" style="height: 20px;">&nbsp;</td>
        </tr>
        <tr>
            <td colspan="3" width="100%">
                <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="100%" align="center">
                    <tr>
                        <td width="80%">
                            <?php if (!empty($content['field_pg_content_title'])): ?>
                            <h3 style="font-family: 'Times New Roman', Times, serif; font-weight: normal; font-size: 24px; margin: 0;"><a target="_blank" href="Deutschland droht erneute Rüge durch Korruptionswächter" style="color: #333; text-decoration: none;"><?php print render($content['field_pg_content_title']); ?></a></h3>
                            <?php endif; ?>
                        </td>
                        <td width="20%" style="text-align: right;">
                            <?php if (!empty($content['field_pg_content_link'])): ?>
                                <div class="social-media">
                                    <a href="https://www.facebook.com/sharer/sharer.php?u=<?php print $node_url; ?>" class="facebook" target="_blank"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/social-facebook.png" alt="Facebook" border="0" style="display: inline-block;"></a>
                                    <a href="https://twitter.com/intent/tweet?text=<?php print $field_pg_content_title[0]['safe_value']; ?>&url=<?php print $node_url; ?>" class="twitter" target="_blank"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/social-twitter.png" alt="Twitter" border="0" style="display: inline-block;"></a>
                                </div>
                            <?php endif; ?>
                        </td>
                    </tr>
                </table>
            </td>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 10px; font-size: 1px;">&nbsp;</td>
        </tr>
        <tr>
            <?php if (!empty($content['field_pg_content_link'])): ?>
                <td colspan="3" width="100%">
                    <?php print render($content); ?>
                </td>
            <?php else: ?>
                <td width="240" class="block_td pic_td" style="vertical-align: top;">
                    <?php print render($content['field_pg_content_img']); ?>
                </td>
                <td width="20" class="block_td pic_td" style="vertical-align: top;">&nbsp;</td>
                <td width="340" class="block_td percent_td" style="vertical-align: top;">
                    <?php print render($content); ?>
                </td>
            <?php endif; ?>
        </tr>
        <tr>
            <td colspan="3" width="100%" style="height: 25px; font-size: 1px;">&nbsp;</td>
        </tr>
    </table>
</div>
