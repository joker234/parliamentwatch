<?php foreach ($items as $delta => $item): ?>
<tr>
    <td width="40" style="vertical-align: top; text-align: center;"><img src="<?php print $GLOBALS['base_url'] ?>/sites/all/themes/custom/parliamentwatch/images/newsletter/list-icon.png" width="7" height="13" border="0"></td>
    <td width="560">
        <?php print render($item); ?>
    </td>
</tr>
<?php endforeach; ?>