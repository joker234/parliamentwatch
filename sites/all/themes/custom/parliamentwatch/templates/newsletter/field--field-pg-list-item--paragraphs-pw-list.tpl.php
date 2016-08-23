<?php foreach ($items as $delta => $item): ?>
<tr>
    <td width="20" style="padding-top: 2px; vertical-align: top;"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/list-icon.png" width="7" height="13" border="0"></td>
    <td width="580">
        <?php print render($item); ?>
    </td>
</tr>
<?php endforeach; ?>