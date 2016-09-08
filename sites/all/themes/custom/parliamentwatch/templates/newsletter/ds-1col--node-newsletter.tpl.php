<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>

    <style type="text/css">
        .ExternalClass {width:100%;} 
        .ExternalClass, .ExternalClass p, .ExternalClass span, .ExternalClass font, .ExternalClass td, .ExternalClass div {
            line-height: 100%;
        }
        body {-webkit-text-size-adjust:none; -ms-text-size-adjust:none;} 
        body {margin:0; padding:0;}
        table td {border-collapse:collapse;} 
        p {margin:0; padding:0; margin-bottom:0;}
        h1, h2, h3, h4, h5, h6 {
            color: black;
            line-height: 100%;
        }
        a, a:link {
            color:#f63;
            text-decoration: underline;
        }
        body, #body_style {
            background:#fff;
            min-height:1000px;
            color:#fff;
            font-family:Arial, Helvetica, sans-serif;
            font-size:12px;
        } 
        span.yshortcuts { color:#000; background-color:none; border:none;}
        span.yshortcuts:hover,
        span.yshortcuts:active,
        span.yshortcuts:focus {color:#000; background-color:none; border:none;}

        a:visited { color: #3c96e2; text-decoration: none} 
        a:focus { color: #3c96e2; text-decoration: underline}
        a:hover { color: #3c96e2; text-decoration: underline}

        *[class="show"],
        .show {
            overflow: visible !important;
            float: none !important;
            display: block !important;
            line-height:100% !important;
            position: static !important;
        }
        @media (max-width: 480px) {
        body[yahoo] #container1 {display:block !important}
        body[yahoo] p {font-size: 10px}
        }
        @media (min-width: 768px) and (max-width: 1024px){
        body[yahoo] #container1 {display:block !important} 
        body[yahoo] p {font-size: 12px}
        }
        .visible_mobile {display: none !important;}
        .imageWidth { height: auto; }
        .fluid-image {
            height:auto !important;
            max-width:600px !important;
            width: 100% !important;
        }
        @media (max-width: 640px)  {
            .deviceWidth {width:440px!important; padding:0;}
            .deviceWidthInner {width:410px!important; padding:0;}
            .imageWidth {width:320px!important; padding:0;}
            .block_td {display: block;}
            .percent_td {width: 100% !important;}
            .pic_td {width: 300px !important;}
            .hidden_mobile {display: none !important;}
            .visible_mobile {display: block !important;}
        }
        @media (max-width: 479px) {
            .deviceWidth {width:300px!important; padding:0;}
            .deviceWidthInner {width:250px!important; padding:0;}
            .imageWidth {width:300px!important; padding:0;}
            .hidden_mobile_small {display: none !important;}
            .visible_mobile_small { display: block !important; height: auto !important; width: 100% !important; visibility: visible !important; }
        }
    </style>

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
