<?php

/**
 * @file
 * Display Suite 1 column template.
 */
?>
<<?php print $ds_content_wrapper; print $layout_attributes; ?> class="ds-1col <?php print $classes;?> clearfix">
  
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

    <div id="body_style" style="padding:10px">
        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="100%" style="width: 100%;">
            <tr>
                <td width="100%" style="width: 100%;">
                    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth">
                        <tr>
                            <td width="600" style="text-align: right;">
                                <a target="_blank" href="https://www.abgeordnetenwatch.de/ueber-uns" style="font-family: Arial, Helvetica, Sans-Serif; font-size: 13px; line-height: 19px; color: #666; text-decoration: none; margin-right: 10px;">Über uns</a>
                                <a target="_blank" href="https://www.abgeordnetenwatch.de/ueber-uns/mehr/finanzierung" style="font-family: Arial, Helvetica, Sans-Serif; font-size: 13px; line-height: 19px; color: #666; text-decoration: none; margin-right: 10px;">Finanzierung</a>
                                <a target="_blank" href="https://www.abgeordnetenwatch.de/kontakt" style="font-family: Arial, Helvetica, Sans-Serif; font-size: 13px; line-height: 19px; color: #666; text-decoration: none;">Kontakt</a>
                            </td>
                        </tr>
                        <tr>
                            <td width="600" style="height: 25px;">&nbsp;</td>
                        </tr>
                        <tr>
                            <td width="600">
                                <a title="zur Startseite" target="_blank" href="https://www.abgeordnetenwatch.de">
                                    <img alt="abgeordnetenwatch.de - Weil Transparenz Vertrauen schafft" src="/sites/all/themes/custom/parliamentwatch/images/newsletter/logo-email.png" border="0" width="491" height="57" style="display: block;" class="imageWidth">
                                </a>
                            </td>
                        </tr>
                        <tr>
                            <td width="600" style="height: 35px;">&nbsp;</td>
                        </tr>
                    </table>
                    
                    <table width="100%" cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" style="border-top: 1px dotted #f63;">
                        <tr>
                            <td width="600" style="height: 35px;">&nbsp;</td>
                        </tr>
                    </table>
                </td>
            </tr>
        </table>
        
        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth" style="border-bottom: 1px solid #f63;">
            <tr>
                <td width="600">
                    <?php print $ds_content; ?>
                </td>
            </tr>
        </table>

        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#ffffff" width="600" align="center" class="deviceWidth">
            <tr>
                <td width="100%" style="height: 25px;">&nbsp;</td>
            </tr>
            <tr>
                <td width="100%">
                    <h3 style="font-family: 'Times New Roman', Times, serif; font-weight: normal; font-size: 24px; margin: 0 0 20px; color: #333;">Mit herzlichen Grüßen von</h3>
                </td>
            </tr>
            
            <tr>
                <td width="100%">
                    <img alt="Gregor Hackmack und Boris hekele" width="600" height="170" src="/sites/all/themes/custom/parliamentwatch/images/newsletter/hackmack_hekele_unterschrift.png" class="fluid-image">
                </td>
            </tr>
            <tr>
                <td width="100%" style="height: 35px;">&nbsp;</td>
            </tr>
        </table>

        <!-- Newsletter: Footer -->
        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#f7f7f7" width="100%" align="center" style="background: #f7f7f7; width: 100%; border-top: 1px solid #d3d3d3;">
            <tr>
                <td width="100%" style="height: 25px;">&nbsp;</td>
            </tr>
            <tr>
                <td style="width: 100%; background: #f7f7f7;">
                    <table cellpadding="0" cellspacing="0" border="0" bgcolor="#f7f7f7" width="600" align="center" class="deviceWidth">
                        <tr>
                            <td width="600"><a title="zur Startseite" target="_blank" href="https://www.abgeordnetenwatch.de"><img alt="abgeordnetenwatch.de - Weil Transparenz Vertrauen schafft" width="370" height="44" src="/sites/all/themes/custom/parliamentwatch/images/newsletter/logo-email.png" border="0" style="display:block;" class="imageWidth"></a></td>
                        </tr>
                        <tr><td width="100%" style="height: 25px; background: #f7f7f7;">&nbsp;</td></tr>
                        <tr>
                            <td width="600">
                                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 13px; line-height: 19px; margin: 0 0 10px;">Parlamentwatch e.V., Mittelweg 12, 20148 Hamburg<br>
                                Telefon: 040 - 317 69 10 - 26<br>
                                E-Mail: <a target="_blank" href="mailto:info@abgeordnetenwatch.de" style="color: #f63; text-decoration: none; font-weight: bold;">info@abgeordnetenwatch.de</a></p>

                                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 13px; line-height: 19px; margin: 0 0 10px;">Parlamentwatch e.V. hat seinen Sitz in Hamburg, eingetragen beim Amtsgericht Hamburg VR 19479, vertretungsberechtigte Vorstandsmitglieder sind Boris Hekele und Gregor Hackmack.</p>
                                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 13px; line-height: 19px; margin: 0 0 10px;">Wenn Sie den Newsletter in Zukunft nicht mehr bekommen wollen, dann können Sie ihn <a target="_blank" href="https://www.abgeordnetenwatch.de/newsletter/abmeldung?email=parlamentwatch@aol.com" style="color: #f63; text-decoration: none; font-weight: bold;">hier abbestellen</a>.</p>
                                <p style="font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 13px; line-height: 19px; margin: 0 0 10px;">Spendenkonto<br>
                                Parlamentwatch e.V., Kto.: 2011 120 000, BLZ: 430 609 67 bei der GLS Bank, IBAN DE03430609672011120000, BIC GENODEM1GLS<br>
                                Als gemeinnütziger Verein stellen wir Ihnen gerne eine Spendenbescheinigung aus.</p>
                            </td>
                        </tr>
                    </table>
                </td>
            </tr>
            <tr><td width="100%" style="height: 35px; background: #f7f7f7;">&nbsp;</td></tr>
        </table>
        <div style="border-top: 1px solid #f3f3f3; border-bottom: 1px solid #f3f3f3;">
            <div style="border-top: 1px solid #e8e8e8; border-bottom: 1px solid #e8e8e8;">
                <table cellpadding="0" cellspacing="0" border="0" bgcolor="#f7f7f7" width="100%" align="center" style="background: #f7f7f7; width: 100%; border-top: 1px solid #dfdfdf; border-bottom: 1px solid #dfdfdf;">
                    <tr>
                        <td style="width: 100%; background: #f7f7f7;">
                            <table cellpadding="0" cellspacing="0" border="0" bgcolor="#f7f7f7" width="600" align="center" class="deviceWidth">
                                <tr>
                                    <td width="370">&nbsp;</td>
                                    <td width="50">
                                        <a title="Facebook" target="_blank" href="https://www.facebook.com/abgeordnetenwatch.de"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/footer_social_fb.png" alt="Facebook" border="0" style="display:block;"></a>
                                    </td>
                                    <td width="10" style="line-height: 0; font-size: 0;">&nsbp;</td>
                                    <td width="50">
                                        <a title="Twitter" target="_blank" href="https://twitter.com/a_watch"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/footer_social_twitter.png" alt="Twitter" border="0" style="display:block;"></a>
                                    </td>
                                    <td width="10" style="line-height: 0; font-size: 0;">&nsbp;</td>
                                    <td width="50">
                                        <a title="Google+" target="_blank" href="https://plus.google.com/101206126881536002255/"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/footer_social_google.png" alt="Google+" border="0" style="display:block;"></a>
                                    </td>
                                    <td width="10" style="line-height: 0; font-size: 0;">&nsbp;</td>
                                    <td width="50">
                                        <a title="RSS" target="_blank" href="about:blank"><img src="/sites/all/themes/custom/parliamentwatch/images/newsletter/footer_social_feed.png" alt="RSS" border="0" style="display:block;"></a>
                                    </td>
                                </tr>
                            </table>
                        </td>
                    </tr>
                </table>
            </div>
        </div>
        <table cellpadding="0" cellspacing="0" border="0" bgcolor="#f7f7f7" width="100%" align="center" style="background: #f7f7f7; width: 100%;">
            <tr><td width="100%" style="height: 35px;">&nbsp;</td></tr>
        </table>


    </div>

    
</<?php print $ds_content_wrapper ?>>

<?php if (!empty($drupal_render_children)): ?>
    <?php print $drupal_render_children ?>
<?php endif; ?>
