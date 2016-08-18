<?php
/**
 * @file
 * pw_menu.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function pw_menu_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'HTML Menu Block';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'html_menu_block';
  $fe_block_boxes->body = '<style type="text/css" media="all">
<!--/*--><![CDATA[/*><!--*/
.tb-megamenu.animate .mega > .mega-dropdown-menu,.tb-megamenu.animate.slide .mega > .mega-dropdown-menu > div{transition-delay:300ms;-webkit-transition-delay:300ms;-ms-transition-delay:300ms;-o-transition-delay:300ms;transition-duration:0ms;-webkit-transition-duration:0ms;-ms-transition-duration:0ms;-o-transition-duration:0ms;}

/*]]>*/-->
</style>
<style type="text/css" media="all">
@import url("/sites/all/modules/contrib/tb_megamenu/css/chosen/chosen.css?oc3hy2");
@import url("/sites/all/themes/custom/parliamentwatch/css/tb_megamenu/bootstrap.css?oc3hy2");
@import url("/sites/all/themes/custom/parliamentwatch/css/tb_megamenu/bootstrap-responsive.css");
@import url("/sites/all/themes/custom/parliamentwatch/css/tb_megamenu/base.css?oc3hy2");
@import url("/sites/all/themes/custom/parliamentwatch/css/tb_megamenu/default.css?oc3hy2");
@import url("/sites/all/modules/contrib/tb_megamenu/fonts/font-awesome/css/font-awesome.css?oc3hy2");
@import url("/sites/all/modules/contrib/tb_megamenu/fonts/font-awesome/css/font-awesome-ie7.css?oc3hy2");
</style>
<script type="text/javascript" src="/misc/form.js?oc3hy2"></script>
<script type="text/javascript" src="/misc/collapse.js?oc3hy2"></script>
<script type="text/javascript" src="/sites/all/modules/contrib/tb_megamenu/js/tb-megamenu-frontend.js?oc3hy2"></script>
<script type="text/javascript" src="/sites/all/modules/contrib/tb_megamenu/js/tb-megamenu-touch.js?oc3hy2"></script>
        <nav role="navigation" id="nav">
    <a href="#nav" title="Show navigation">Menü</a>
    <a href="#" title="Hide navigation">Menü</a>
    <ul class="menu"><li class="first expanded"><a href="http://www.abgeordnetenwatch.de/parlamente-210-0.html">Parlamente</a><ul class="menu"><li class="first expanded"><a href="http://www.abgeordnetenwatch.de/bundestag-825-0.html">Bundestag</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-1128-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-1222-0.html">Abstimmungen</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-1454-0.html">Ausschüsse</a></li>
<li class="leaf"><a href="/bundestag/petitionen">Petitionen</a></li>
<li class="leaf"><a href="/bundestag/wahlrecht">Wahlrecht</a></li>
<li class="last leaf"><a href="/bundestag/grusswort">Grußwort</a></li>
</ul></li>
<li class="expanded"><a href="/eu">EU</a><ul class="menu"><li class="first leaf"><a href="/eu/profile">Abgeordnete</a></li>
<li class="leaf"><a href="/eu/wahlrecht">Wahlrecht</a></li>
<li class="leaf"><a href="https://www.abgeordnetenwatch.de/eu/abstimmungen/">Abstimmungen</a></li>
<li class="leaf"><a href="/eu/petitionen">Petitionen</a></li>
<li class="leaf"><a href="/eu/gesetzgebende-verfahren">Gesetzgebende Verfahren</a></li>
<li class="last leaf"><a href="/eu/grusswort">Grußwort vom Schirmherren</a></li>
</ul></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/parlamente-210-0.html">Landtage</a><ul class="menu"><li class="first leaf"><a href="/baden-wuerttemberg">Baden-Württemberg</a></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/bayern-1407-0.html" class="icon-de-by">Bayern</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-1468-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-1247-0.html">Abstimmungen</a></li>
<li class="last leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-1474-0.html">Ausschüsse</a></li>
</ul></li>
<li class="expanded"><a href="/berlin" class="icon-de-be">Berlin (Wahl)</a><ul class="menu"><li class="first leaf"><a href="/berlin/profile">Kandidierende befragen</a></li>
<li class="leaf"><a href="http://kandidatencheck.abgeordnetenwatch.de/berlin">Kandidaten-Check</a></li>
<li class="leaf"><a href="/berlin/grusswort-schirmherr-ralf-wieland">Grußwort Ralf Wieland</a></li>
<li class="leaf"><a href="https://www.abgeordnetenwatch.de/berlin/wahlprogramme">Wahlprogramme</a></li>
<li class="last leaf"><a href="/berlin/wahlrecht">Wahlrecht</a></li>
</ul></li>
<li class="expanded"><a href="/brandenburg">Brandenburg</a><ul class="menu"><li class="first leaf"><a href="/brandenburg/profile">Abgeordnete</a></li>
<li class="last leaf"><a href="/wahlrecht-landtagswahl-brandenburg">Wahlrecht Landtagswahl Brandenburg</a></li>
</ul></li>
<li class="expanded"><a href="/hamburg" class="icon-de-hh">Hamburg</a><ul class="menu"><li class="first leaf"><a href="/hamburg/profile">Abgeordnete</a></li>
<li class="leaf"><a href="/hamburg/wahlprogramme">Wahlprogramme</a></li>
<li class="leaf"><a href="/grusswort-von-carola-veit-prasidentin-der-hamburgischen-burgerschaft">Grußwort von Schirmherrin Carola Veit</a></li>
<li class="last leaf"><a href="/hamburg/wahlergebnis-das-sind-ihre-neuen-abgeordneten-der-burgerschaft">Wahlergebnis</a></li>
</ul></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/hessen-875-0.html" class="icon-de-he">Hessen</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-1415-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-1079-0.html">Abstimmungen</a></li>
<li class="last leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-1020-0.html">Ausschüsse</a></li>
</ul></li>
<li class="expanded"><a href="/mecklenburg-vorpommern" class="icon-de-hb">Mecklenburg-Vorpommern (Wahl)</a><ul class="menu"><li class="first leaf"><a href="https://www.abgeordnetenwatch.de/profile/mecklenburg-vorpommern/candidates">Kandidierende</a></li>
<li class="leaf"><a href="https://www.abgeordnetenwatch.de/mecklenburg-vorpommern/grusswort-schirmherrin-sylvia-bretschneider">Grußwort der Schirmherrin</a></li>
<li class="leaf"><a href="https://www.abgeordnetenwatch.de/mecklenburg-vorpommern/wahlprogramme">Wahlprogramme</a></li>
<li class="last leaf"><a href="/mecklenburg-vorpommern/wahlrecht">Wahlrecht</a></li>
</ul></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/niedersachsen-1157-0.html" class="icon-de-ni">Niedersachsen</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-1321-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-1251-0.html">Abstimmungen</a></li>
<li class="last leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-1124-0.html">Ausschüsse</a></li>
</ul></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/nrw-967-0.html" class="icon-de-nw">Nordrhein-Westfalen</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-924-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-251-0.html">Abstimmungen</a></li>
<li class="last leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-624-0.html">Ausschüsse</a></li>
</ul></li>
<li class="leaf"><a href="/rheinland-pfalz">Rheinland-Pfalz</a></li>
<li class="expanded"><a href="/sachsen" class="icon-de-sn">Sachsen</a><ul class="menu"><li class="first leaf"><a href="/sachsen/profile">Abgeordnete</a></li>
<li class="leaf"><a href="/grusswort-von-schirmherr-dr-matthias-rossler">Grußwort vom Landtagspräsident</a></li>
<li class="last leaf"><a href="/wahlrecht-landtagswahl-sachsen">Wahlrecht Landtagswahl Sachsen</a></li>
</ul></li>
<li class="expanded"><a href="http://www.abgeordnetenwatch.de/schleswig_holstein-852-0.html" class="icon-de-sh">Schleswig-Holstein</a><ul class="menu"><li class="first leaf"><a href="http://www.abgeordnetenwatch.de/abgeordnete-977-0.html">Abgeordnete</a></li>
<li class="leaf"><a href="http://www.abgeordnetenwatch.de/abstimmungen-662-0.html">Abstimmungen</a></li>
<li class="last leaf"><a href="http://www.abgeordnetenwatch.de/ausschuesse-808-0.html">Ausschüsse</a></li>
</ul></li>
<li class="last expanded"><a href="/thueringen" class="icon-de-th">Thüringen</a><ul class="menu"><li class="first leaf"><a href="/thueringen/profile">Abgeordnete</a></li>
<li class="last leaf"><a href="/wahlrecht-landtagswahl-thuringen">Wahlrecht Landtagswahl Thüringen</a></li>
</ul></li>
</ul></li>
<li class="collapsed"><a href="/baden-wuerttemberg">Aktuelle Wahlen</a></li>
<li class="last collapsed"><a href="https://www.abgeordnetenwatch.de/archiv">Archiv</a></li>
</ul></li>
<li class="leaf"><a href="/blog">Blog</a></li>
<li class="expanded"><a href="/petitionen">Mitmachen</a><ul class="menu"><li class="first leaf"><a href="/ueber-uns/spendenformular">Unabhängigkeit sichern</a></li>
<li class="last expanded"><a href="/mitmachen/was-kann-ich-sonst-tun">Was kann ich sonst tun?</a><ul class="menu"><li class="first leaf"><a href="/presse/download">Verlinken Sie uns</a></li>
<li class="leaf"><a href="/ueber-uns/mitmachen/infopaket-bestellen">Infopaket bestellen</a></li>
<li class="leaf"><a href="/ueber-uns/mitmachen/parlamentsbeobachter">Parlamentsbeobachter</a></li>
<li class="last leaf"><a href="/api" title="Offene Datenschnittstelle (API)">Offene Datenschnittstelle</a></li>
</ul></li>
</ul></li>
<li class="expanded"><a href="/ueber-uns/presse">Presse</a><ul class="menu"><li class="first leaf"><a href="/ueber-uns/presse">Pressespiegel</a></li>
<li class="leaf"><a href="/ueber-uns/presse/pressemitteilungen">Pressemitteilungen</a></li>
<li class="last leaf"><a href="/presse/download">Grafiken &amp; Logo</a></li>
</ul></li>
<li class="expanded"><a href="/ueber-uns">Über uns</a><ul class="menu"><li class="first leaf"><a href="/der-weg-was-wir-machen">Der Weg - Was wir machen</a></li>
<li class="leaf"><a href="/was-wir-wollen-das-ziel" title="Ziele, die abgeordnetenwatch.de erreichen will">Das Ziel - Was wir wollen</a></li>
<li class="leaf"><a href="/unsere-erfolge" title="Unsere größten Erfolge - was wir in über 10 Jahren schon erreicht haben">Die Erfolge - Was wir schon erreicht haben</a></li>
<li class="expanded"><a href="/ueber-uns/mehr/finanzierung">Finanzierung</a><ul class="menu"><li class="first leaf"><a href="/ueber-uns/mehr/finanzierung">Unsere Finanzen</a></li>
<li class="leaf"><a href="/ueber-uns/mehr/finanzierung/parlamentwatch-eV">Jahresbericht</a></li>
<li class="leaf"><a href="/ueber-uns/spendenformular">Spenden</a></li>
<li class="last leaf"><a href="/forderer-werden">Förderer werden</a></li>
</ul></li>
<li class="expanded"><a href="/ueber-uns/mehr/mitwirkende">Menschen</a><ul class="menu"><li class="first leaf"><a href="/ueber-uns/mehr/mitwirkende">Das Team</a></li>
<li class="leaf"><a href="/ueber-uns/mehr/kuratorium">Unser Kuratorium</a></li>
<li class="leaf"><a href="/ueber-uns/jobs">Jobs</a></li>
<li class="last leaf"><a href="/kontakt">Kontakt</a></li>
</ul></li>
<li class="leaf"><a href="/ueber-uns/impressum">Impressum</a></li>
<li class="last leaf"><a href="/urheberrechtshinweise">Urheberrechtshinweise</a></li>
</ul></li>
<li class="last leaf"><a href="/user" class="mobile-only">Login</a></li>
</ul></nav><div class="block block-tb-megamenu desktop-only block-menu-main-menu-de block-tb-megamenu-menu-main-menu-de even block-without-title" id="block-tb-megamenu-menu-main-menu-de">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                                
        <div class="content clearfix">
          <div  data-duration="0" data-delay="300" id="tb-megamenu-menu-main-menu-de" class="tb-megamenu tb-megamenu-menu-main-menu-de animate slide" class="tb-megamenu tb-megamenu-menu-main-menu-de animate slide">
      <button data-target=".nav-collapse" data-toggle="collapse" class="btn btn-navbar tb-megamenu-button" type="button">
      <i class="fa fa-reorder"></i>
    </button>
    <div class="nav-collapse ">
    <ul  class="tb-megamenu-nav nav level-0 items-6" class="tb-megamenu-nav nav level-0 items-6">
  <li  data-id="3983" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="justify" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mega-align-justify dropdown" class="tb-megamenu-item level-1 mega mega-align-justify dropdown">
  <a href="http://www.abgeordnetenwatch.de/parlamente-210-0.html"  class="dropdown-toggle">
        
    Parlamente          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="940" style="width: 940px;" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="4" data-hidewcol="0" id="tb-megamenu-column-3" class="tb-megamenu-column span4  mega-col-nav" class="tb-megamenu-column span4  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-2" class="tb-megamenu-subnav mega-nav level-1 items-2">
  <li  data-id="3989" data-level="2" data-type="menu_item" data-class="" data-xicon="icon-bundestag" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="http://www.abgeordnetenwatch.de/bundestag-825-0.html"  class="mega-group-title">
          <i class="icon-bundestag"></i>
        
    Bundestag          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-1" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-6" class="tb-megamenu-subnav mega-nav level-2 items-6">
  <li  data-id="4000" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-1128-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4001" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-1222-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4002" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-1454-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>

<li  data-id="5706" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-signing" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/bundestag/petitionen" >
          <i class="icon-signing"></i>
        
    Petitionen          </a>
  </li>

<li  data-id="4003" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/bundestag/wahlrecht" >
          <i class="icon-election"></i>
        
    Wahlrecht          </a>
  </li>

<li  data-id="4005" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-quote-right" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/bundestag/grusswort" >
          <i class="icon-quote-right"></i>
        
    Grußwort          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3990" data-level="2" data-type="menu_item" data-class="" data-xicon="icon-eu" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="/eu"  class="mega-group-title">
          <i class="icon-eu"></i>
        
    EU          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-2" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-6" class="tb-megamenu-subnav mega-nav level-2 items-6">
  <li  data-id="4006" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/eu/profile" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4009" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/eu/wahlrecht" >
          <i class="icon-election"></i>
        
    Wahlrecht          </a>
  </li>

<li  data-id="4007" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="https://www.abgeordnetenwatch.de/eu/abstimmungen/" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="5708" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-signing" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/eu/petitionen" >
          <i class="icon-signing"></i>
        
    Petitionen          </a>
  </li>

<li  data-id="4010" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-folders" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/eu/gesetzgebende-verfahren" >
          <i class="icon-folders"></i>
        
    Gesetzgebende Verfahren          </a>
  </li>

<li  data-id="4315" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-quote-right" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/eu/grusswort" >
          <i class="icon-quote-right"></i>
        
    Grußwort vom Schirmherren          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>
</ul>
  </div>
</div>

<div  data-class="" data-width="4" data-hidewcol="" id="tb-megamenu-column-16" class="tb-megamenu-column span4  mega-col-nav" class="tb-megamenu-column span4  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-1" class="tb-megamenu-subnav mega-nav level-1 items-1">
  <li  data-id="4807" data-level="2" data-type="menu_item" data-class="" data-xicon="icon-de" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="http://www.abgeordnetenwatch.de/parlamente-210-0.html"  class="mega-group-title">
          <i class="icon-de"></i>
        
    Landtage          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-15" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-13" class="tb-megamenu-subnav mega-nav level-2 items-13">
  <li  data-id="3991" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-bw" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/baden-wuerttemberg" >
          <i class="icon-de-bw"></i>
        
    Baden-Württemberg          </a>
  </li>

<li  data-id="3992" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-by" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="http://www.abgeordnetenwatch.de/bayern-1407-0.html"  class="dropdown-toggle" title="Bayern">
          <i class="icon-de-by"></i>
        
    Bayern          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-4" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4014" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-1468-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4015" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-1247-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4016" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-1474-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3993" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-be" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/berlin"  class="dropdown-toggle" title="Berlin (Wahl)">
          <i class="icon-de-be"></i>
        
    Berlin (Wahl)          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-5" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-5" class="tb-megamenu-subnav mega-nav level-3 items-5">
  <li  data-id="6079" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/berlin/profile" >
          <i class="icon-politician"></i>
        
    Kandidierende befragen          </a>
  </li>

<li  data-id="6086" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-check" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://kandidatencheck.abgeordnetenwatch.de/berlin" >
          <i class="icon-check"></i>
        
    Kandidaten-Check          </a>
  </li>

<li  data-id="5974" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-quote-right" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/berlin/grusswort-schirmherr-ralf-wieland" >
          <i class="icon-quote-right"></i>
        
    Grußwort Ralf Wieland          </a>
  </li>

<li  data-id="6085" data-level="4" data-type="menu_item" data-class="" data-xicon=" icon-books" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="https://www.abgeordnetenwatch.de/berlin/wahlprogramme" >
          <i class=" icon-books"></i>
        
    Wahlprogramme          </a>
  </li>

<li  data-id="5973" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/berlin/wahlrecht" >
          <i class="icon-election"></i>
        
    Wahlrecht          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4573" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-bb" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/brandenburg"  class="dropdown-toggle">
          <i class="icon-de-bb"></i>
        
    Brandenburg          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-6" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-2" class="tb-megamenu-subnav mega-nav level-3 items-2">
  <li  data-id="4578" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/brandenburg/profile" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4575" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/wahlrecht-landtagswahl-brandenburg" >
          <i class="icon-election"></i>
        
    Wahlrecht Landtagswahl Brandenburg          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3994" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-hh" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/hamburg"  class="dropdown-toggle" title="Hamburg">
          <i class="icon-de-hh"></i>
        
    Hamburg          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-7" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-4" class="tb-megamenu-subnav mega-nav level-3 items-4">
  <li  data-id="4020" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/hamburg/profile" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4881" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/hamburg/wahlprogramme" >
          <i class="icon-election"></i>
        
    Wahlprogramme          </a>
  </li>

<li  data-id="4880" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-quote-right" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/grusswort-von-carola-veit-prasidentin-der-hamburgischen-burgerschaft" >
          <i class="icon-quote-right"></i>
        
    Grußwort von Schirmherrin Carola Veit          </a>
  </li>

<li  data-id="4890" data-level="4" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/hamburg/wahlergebnis-das-sind-ihre-neuen-abgeordneten-der-burgerschaft" >
        
    Wahlergebnis          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3995" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-he" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="http://www.abgeordnetenwatch.de/hessen-875-0.html"  class="dropdown-toggle" title="Hessen">
          <i class="icon-de-he"></i>
        
    Hessen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-8" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4023" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-1415-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4024" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-1079-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4025" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-1020-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="5297" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-mv" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/mecklenburg-vorpommern"  class="dropdown-toggle" title="Mecklenburg-Vorpommern (Wahl)">
          <i class="icon-de-mv"></i>
        
    Mecklenburg-Vorpommern (Wahl)          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-9" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-4" class="tb-megamenu-subnav mega-nav level-3 items-4">
  <li  data-id="5298" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="https://www.abgeordnetenwatch.de/profile/mecklenburg-vorpommern/candidates" >
          <i class="icon-politician"></i>
        
    Kandidierende          </a>
  </li>

<li  data-id="5299" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-quote-right" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="https://www.abgeordnetenwatch.de/mecklenburg-vorpommern/grusswort-schirmherrin-sylvia-bretschneider" >
          <i class="icon-quote-right"></i>
        
    Grußwort der Schirmherrin          </a>
  </li>

<li  data-id="5300" data-level="4" data-type="menu_item" data-class="" data-xicon=" icon-books" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="https://www.abgeordnetenwatch.de/mecklenburg-vorpommern/wahlprogramme" >
          <i class=" icon-books"></i>
        
    Wahlprogramme          </a>
  </li>

<li  data-id="6084" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/mecklenburg-vorpommern/wahlrecht" >
          <i class="icon-election"></i>
        
    Wahlrecht          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3996" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-ni" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="http://www.abgeordnetenwatch.de/niedersachsen-1157-0.html"  class="dropdown-toggle" title="Niedersachsen">
          <i class="icon-de-ni"></i>
        
    Niedersachsen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-10" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4026" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-1321-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4027" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-1251-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4028" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-1124-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3997" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-nw" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="http://www.abgeordnetenwatch.de/nrw-967-0.html"  class="dropdown-toggle" title="Nordrhein-Westfalen">
          <i class="icon-de-nw"></i>
        
    Nordrhein-Westfalen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-11" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4029" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-924-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4030" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-251-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4031" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-624-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4237" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-rp" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/rheinland-pfalz" >
          <i class="icon-de-rp"></i>
        
    Rheinland-Pfalz          </a>
  </li>

<li  data-id="3998" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-sn" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/sachsen"  class="dropdown-toggle" title="Sachsen">
          <i class="icon-de-sn"></i>
        
    Sachsen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-12" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4568" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/sachsen/profile" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4570" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/wahlrecht-landtagswahl-sachsen" >
          <i class="icon-election"></i>
        
    Wahlrecht Landtagswahl Sachsen          </a>
  </li>

<li  data-id="4569" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-quote-left" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/grusswort-von-schirmherr-dr-matthias-rossler" >
          <i class="icon-quote-left"></i>
        
    Grußwort vom Landtagspräsident          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3999" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-sh" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="http://www.abgeordnetenwatch.de/schleswig_holstein-852-0.html"  class="dropdown-toggle" title="Schleswig-Holstein">
          <i class="icon-de-sh"></i>
        
    Schleswig-Holstein          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-13" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-3" class="tb-megamenu-subnav mega-nav level-3 items-3">
  <li  data-id="4035" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abgeordnete-977-0.html" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4036" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-poll" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/abstimmungen-662-0.html" >
          <i class="icon-poll"></i>
        
    Abstimmungen          </a>
  </li>

<li  data-id="4037" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-group" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="http://www.abgeordnetenwatch.de/ausschuesse-808-0.html" >
          <i class="icon-group"></i>
        
    Ausschüsse          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4571" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-th" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega dropdown-submenu" class="tb-megamenu-item level-3 mega dropdown-submenu">
  <a href="/thueringen"  class="dropdown-toggle" title="Thüringen">
          <i class="icon-de-th"></i>
        
    Thüringen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-14" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-3 items-2" class="tb-megamenu-subnav mega-nav level-3 items-2">
  <li  data-id="4572" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-politician" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/thueringen/profile" >
          <i class="icon-politician"></i>
        
    Abgeordnete          </a>
  </li>

<li  data-id="4574" data-level="4" data-type="menu_item" data-class="" data-xicon="icon-election" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-4 mega" class="tb-megamenu-item level-4 mega">
  <a href="/wahlrecht-landtagswahl-thuringen" >
          <i class="icon-election"></i>
        
    Wahlrecht Landtagswahl Thüringen          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>
</ul>
  </div>
</div>

<div  data-class="" data-width="4" data-hidewcol="" id="tb-megamenu-column-19" class="tb-megamenu-column span4  mega-col-nav" class="tb-megamenu-column span4  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-2" class="tb-megamenu-subnav mega-nav level-1 items-2">
  <li  data-id="5501" data-level="2" data-type="menu_item" data-class="" data-xicon="icon-voting" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="/baden-wuerttemberg"  class="mega-group-title">
          <i class="icon-voting"></i>
        
    Aktuelle Wahlen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-17" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-2" class="tb-megamenu-subnav mega-nav level-2 items-2">
  <li  data-id="6083" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-mv" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="https://www.abgeordnetenwatch.de/mecklenburg-vorpommern" >
          <i class="icon-de-mv"></i>
        
    Landtagswahl Mecklenburg-Vorpommern          </a>
  </li>

<li  data-id="6080" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de-be" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/berlin" >
          <i class="icon-de-be"></i>
        
    Abgeordnetenhauswahl Berlin          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="5502" data-level="2" data-type="menu_item" data-class="" data-xicon="icon-folders" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="https://www.abgeordnetenwatch.de/archiv"  class="mega-group-title">
          <i class="icon-folders"></i>
        
    Archiv          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-18" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-2" class="tb-megamenu-subnav mega-nav level-2 items-2">
  <li  data-id="5505" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="https://www.abgeordnetenwatch.de/archiv" >
          <i class="icon-de"></i>
        
    Wahlen & Parlamente          </a>
  </li>

<li  data-id="5504" data-level="3" data-type="menu_item" data-class="" data-xicon="icon-de" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="http://www.abgeordnetenwatch.de/kommunen-933-0.html" >
          <i class="icon-de"></i>
        
    Kommunen          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4474" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="justify" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mega-align-justify dropdown" class="tb-megamenu-item level-1 mega mega-align-justify dropdown">
  <a href="/blog"  class="dropdown-toggle">
        
    Blog          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-20" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--blog-menu_block" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <section class="block block-views block-blog-menu-block block-views-blog-menu-block odd" id="block-views-blog-menu-block">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                          <h3 class="block-title"><a href="/blog" class="block-title-link">Neueste Blogartikel</a></h3>
                        
        <div class="content clearfix">
          <div class="view view-blog view-id-blog view-display-id-menu_block view-dom-id-b6b8350d2506cea86431c13d51515250">
        
  
  
      <div class="view-content">
        <div class="views-row-item clearfix">
      
          20.07.2016    
      -    <span class="normal-weight medium"><a href="/blog/2016-07-20/schleswig-holstein-parteien-wollen-mehr-transparenz-von-anderen-und-weniger-von-sich">Schleswig-Holstein: Parteien wollen mehr Transparenz von anderen und weniger von sich</a></span>    </div>
  <div class="views-row-item clearfix">
      
          14.07.2016    
      -    <span class="normal-weight medium"><a href="/blog/2016-07-14/politiker-sieht-gemeinsamkeiten-zwischen-nationalsozialismus-kommunismus-und">Politiker sieht Gemeinsamkeiten zwischen Nationalsozialismus, Kommunismus und abgeordnetenwatch.de</a></span>    </div>
  <div class="views-row-item clearfix">
      
          13.07.2016    
      -    <span class="normal-weight medium"><a href="/blog/2016-07-13/seitenwechsel-die-wirtschaft-bundesregierung-bremst-karenzzeit-regelung-aus">Seitenwechsel in die Wirtschaft: Bundesregierung bremst Karenzzeit-Regelung aus</a></span>    </div>
  <div class="views-row-item clearfix">
      
          27.06.2016    
      -    <span class="normal-weight medium"><a href="/blog/2016-06-27/die-bundestagsabgeordneten-im-antwort-check-2016">Die Bundestagsabgeordneten im Antwort-Check (2016)</a></span>    </div>
  <div class="views-row-item clearfix">
      
          27.06.2016    
      -    <span class="normal-weight medium"><a href="/blog/2016-06-23/600000-euro-spenden-spd-ortsverein-gestuckelt-staatsanwaltschaft-ermittelt">600.000 Euro-Spenden an SPD-Ortsverein gestückelt - Staatsanwaltschaft ermittelt</a></span>    </div>
    </div>
  
  
  
      
<div class="more-link">
  <a href="/blog">
    alle Blogartikel  </a>
</div>
  
  
  
</div>        </div>
    </div>
  </div>
</section>  </div>
</div>
  </div>
</div>

<div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-21" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--blog-menu_teaser" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <div class="block block-views block-blog-menu-teaser block-views-blog-menu-teaser even block-without-title" id="block-views-blog-menu-teaser">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                                
        <div class="content clearfix">
          <div class="view view-blog view-id-blog view-display-id-menu_teaser view-dom-id-8cffb3cab6551ca6a6cad4b7b8de937e">
        
  
  
      <div class="view-content">
        <div class="push-bottom-s">
      
          <h3><a href="/blog/nebeneinkuenfte2016">Abgeordnete kassieren mehr als 18 Mio. Euro nebenher – Millionenbeträge bleiben im Dunkeln</a></h3>    
  <div class="float-left push-bottom-s push-right-m">        <a href="/node/%5Bnid%5D"><a href="/blog/nebeneinkuenfte2016"><img typeof="foaf:Image" src="/sites/abgeordnetenwatch.de/files/styles/pw_megamenu_thumbnail/public/blog/nebeneinkuenfte_teaser_gross.png?itok=MBe3tHvH" width="140" height="93" alt="Teasergrafik Top 10-Liste Nebeneinkünfte" title="Teasergrafik Top 10-Liste Nebeneinkünfte" /></a></a>  </div>  
          
<div class="field-body views-fieldset" data-module="views_fieldsets" class="field-body views-fieldset">

      <div class="medium">09.08.2016</div>      
	Seit der Wahl haben die Bundestagsabgeordneten mindestens 18 Mio. Euro an Nebeneinkünften kassiert, wahrscheinlich aber noch sehr viel mehr. Wegen der intransparenten Veröffentlichungspflichten bleiben nach abgeordnetenwatch.de-Recherchen Millionenbeträge im Dunkeln. In vielen Fällen ist außerdem unklar, von wem die Parlamentarier Geld erhalten.
      <span class="read-more"><a href="/blog/nebeneinkuenfte2016">weiterlesen</a></span>  
</div>

    </div>
    </div>
  
  
  
  
      <div class="view-footer">
      <h3>Unsere wichtigsten Themen</h3>
<a href="/blogcategories/lobbyismus" class="tagadelic level5" rel="tag" title="">Lobbyismus</a> 
<a href="/blogcategories/allgemein" class="tagadelic level6" rel="tag" title="">Allgemein</a> 
<a href="/blogcategories/abgeordnetenbestechung" class="tagadelic level2" rel="tag" title="">Abgeordnetenbestechung</a> 
<a href="/blogcategories/transparenz" class="tagadelic level4" rel="tag" title="">Transparenz</a> 
<a href="/blogcategories/kandidaten-check" class="tagadelic level1" rel="tag" title="">Kandidaten-Check</a> 
<a href="/blogcategories/parteispenden" class="tagadelic level3" rel="tag" title="">Parteispenden</a> 
<a href="/blogcategories/abgewimmelt" class="tagadelic level1" rel="tag" title="">abgewimmelt</a> 
<a href="/blogcategories/bundestag" class="tagadelic level4" rel="tag" title="">Bundestag</a> 
<a href="/blogcategories/nebeneinkuenfte" class="tagadelic level4" rel="tag" title="">Nebeneinkünfte</a> 
<a href="/blogcategories/wahlen" class="tagadelic level3" rel="tag" title="">Wahlen</a> 
<a href="/blogcategories/landtage" class="tagadelic level3" rel="tag" title="">Landtage</a> 
<a href="/blogcategories/ifg" class="tagadelic level1" rel="tag" title="">IFG</a> 
    </div>
  
  
</div>        </div>
    </div>
  </div>
</div>  </div>
</div>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4726" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="justify" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mega-align-justify dropdown" class="tb-megamenu-item level-1 mega mega-align-justify dropdown">
  <a href="/petitionen"  class="dropdown-toggle">
        
    Mitmachen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-22" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--pw_petitions-menu_block" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <section class="block block-views block-pw-petitions-menu-block block-views-pw-petitions-menu-block odd" id="block-views-pw-petitions-menu-block">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                          <h3 class="block-title"><a href="/petitionen" class="block-title-link">Petitionen</a></h3>
                        
        <div class="content clearfix">
          <div class="view view-pw-petitions view-id-pw_petitions view-display-id-menu_block view-dom-id-3b78efd6b0f74d2e3c978439aca038f7">
            <div class="view-header">
      <p>Zeichnen Sie die Petitionen von abgeordnetenwatch.de und bitten Sie über Ihre Netzwerke auch interessierte Freunde und Bekannte dies zu tun. Gemeinsam für mehr Transparenz und gegen Korruption! <a href="/petitionen" class="read-more">alle Petitionen</a></p>
    </div>
  
  
  
      <div class="view-content">
        <div class="views-row-item clearfix">
      
          <h4><a href="/petitionen/lobbykontakte-veroeffentlichen">Erfolg: Lobbykontakte veröffentlicht!</a></h4>    
  <div>        150.366 unterstützen die Petition  </div>  
  <div class="float-left push-right-m">        <div class="pw-progress-wrapper pw-progress-wrapper-s"><div class="pw-progress" style="width: 100%;"></div></div>  </div>  
  <div class="link-sign float-right">        <a href="/petitionen/lobbykontakte-veroeffentlichen">Diese Petition mitzeichnen</a>  </div>  </div>
  <div class="views-row-item clearfix">
      
          <h4><a href="/bundestag/petitionen/schluss-mit-geheimem-lobbyismus">Schluss mit geheimem Lobbyismus!</a></h4>    
  <div>        140.361 unterstützen die Petition  </div>  
  <div class="float-left push-right-m">        <div class="pw-progress-wrapper pw-progress-wrapper-s"><div class="pw-progress" style="width: 93.574%;"></div></div>  </div>  
  <div class="link-sign float-right">        <a href="/bundestag/petitionen/schluss-mit-geheimem-lobbyismus">Diese Petition mitzeichnen</a>  </div>  </div>
  <div class="views-row-item clearfix">
      
          <h4><a href="/petitionen/abgeordnetenbestechung-bestrafen-korrupt">Abgeordnetenbestechung: bestrafen! #korrupt</a></h4>    
  <div>        58.850 unterstützen die Petition  </div>  
  <div class="float-left push-right-m">        <div class="pw-progress-wrapper pw-progress-wrapper-s"><div class="pw-progress" style="width: 58.85%;"></div></div>  </div>  
  <div class="link-sign float-right">        <a href="/petitionen/abgeordnetenbestechung-bestrafen-korrupt">Diese Petition mitzeichnen</a>  </div>  </div>
    </div>
  
  
  
  
  
  
</div>        </div>
    </div>
  </div>
</section>  </div>
</div>
  </div>
</div>

<div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-23" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="block--72" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <section class="block block-block block-72 block-block-72 even" id="block-block-72">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                          <h3 class="block-title"><a href="/ueber-uns/spendenformular" class="block-title-link">Unabhängigkeit sichern</a></h3>
                        
        <div class="content clearfix">
          <p>
	abgeordnetenwatch.de wird vom gemeinnützigen Parlamentwatch e.V. betrieben und finanziert sich zu großen Teilen aus Spenden. Helfen Sie mit unsere Unabhängigkeit zu sichern. Für mehr Transparenz in unserer Demokratie.
</p>
<p>
	<a class="button big" href="/node/10508">Spenden</a>
</p>
<h3>Was kann ich sonst tun?</h3>
<div class="nav-pw">
<div class="menu-block-wrapper menu-block-1 menu-name-menu-main-menu-de parent-mlid-4753 menu-level-1">
  <ul class="menu"><li class="first leaf menu-mlid-4729"><a href="/presse/download">Verlinken Sie uns</a></li>
<li class="leaf menu-mlid-4730"><a href="/ueber-uns/mitmachen/infopaket-bestellen">Infopaket bestellen</a></li>
<li class="leaf menu-mlid-4731"><a href="/ueber-uns/mitmachen/parlamentsbeobachter">Parlamentsbeobachter</a></li>
<li class="last leaf menu-mlid-4732"><a href="/api" title="Offene Datenschnittstelle (API)">Offene Datenschnittstelle</a></li>
</ul></div>
</div>        </div>
    </div>
  </div>
</section>  </div>
</div>
  </div>
</div>
</div>

<div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="mobile-only" data-width="12" data-hidewcol="0" id="tb-megamenu-column-25" class="tb-megamenu-column span12  mega-col-nav mobile-only" class="tb-megamenu-column span12  mega-col-nav mobile-only">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-2" class="tb-megamenu-subnav mega-nav level-1 items-2">
  <li  data-id="4728" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega" class="tb-megamenu-item level-2 mega">
  <a href="/ueber-uns/spendenformular" >
        
    Unabhängigkeit sichern          </a>
  </li>

<li  data-id="4753" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega dropdown-submenu" class="tb-megamenu-item level-2 mega dropdown-submenu">
  <a href="/mitmachen/was-kann-ich-sonst-tun"  class="dropdown-toggle">
        
    Was kann ich sonst tun?          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-24" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-4" class="tb-megamenu-subnav mega-nav level-2 items-4">
  <li  data-id="4729" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/presse/download" >
        
    Verlinken Sie uns          </a>
  </li>

<li  data-id="4730" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mitmachen/infopaket-bestellen" >
        
    Infopaket bestellen          </a>
  </li>

<li  data-id="4731" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mitmachen/parlamentsbeobachter" >
        
    Parlamentsbeobachter          </a>
  </li>

<li  data-id="4732" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/api"  title="Offene Datenschnittstelle (API)">
        
    Offene Datenschnittstelle          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="3985" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="justify" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mega-align-justify dropdown" class="tb-megamenu-item level-1 mega mega-align-justify dropdown">
  <a href="/ueber-uns/presse"  class="dropdown-toggle">
        
    Presse          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-26" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--press_release-menu_block" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <section class="block block-views block-press-release-menu-block block-views-press-release-menu-block odd" id="block-views-press-release-menu-block">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                          <h3 class="block-title"><a href="/ueber-uns/presse/pressemitteilungen" class="block-title-link">Neueste Pressemitteilungen</a></h3>
                        
        <div class="content clearfix">
          <div class="view view-press-release view-id-press_release view-display-id-menu_block view-dom-id-77e2e33506b8023ba199ccb801e73b4a">
        
  
  
      <div class="view-content">
        <div class="views-row-item">
      
          <span class="normal-weight medium"><a href="/ueber-uns/presse/pressemitteilungen/2016-08-17/wen-wahlen-abgeordnetenwatchde-startet-kandidaten">Wen wählen? abgeordnetenwatch.de startet Kandidaten-Check zur Berlin-Wahl</a></span>    </div>
  <div class="views-row-item">
      
          <span class="normal-weight medium"><a href="/ueber-uns/presse/pressemitteilungen/2016-08-09/abgeordnete-kassieren-mindestens-18-mio-euro-nebenher">Abgeordnete kassieren mindestens 18 Mio. Euro nebenher – Millionenbeträge bleiben im Dunkeln</a></span>    </div>
  <div class="views-row-item">
      
          <span class="normal-weight medium"><a href="/ueber-uns/presse/pressemitteilungen/2016-05-11/abgeordnetenwatchde-fordert-strenges-lobbyregister-0">abgeordnetenwatch.de fordert strenges Lobbyregister – 128.000 Menschen unterstützen Online-Petition</a></span>    </div>
    </div>
  
  
  
      
<div class="more-link">
  <a href="/ueber-uns/presse/pressemitteilungen">
    alle Pressemitteilungen  </a>
</div>
  
  
  
</div>        </div>
    </div>
  </div>
</section>  </div>
</div>
  </div>
</div>

<div  data-showblocktitle="1" data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-27" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="block--73" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <section class="block block-block block-73 block-block-73 even" id="block-block-73">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                          <h3 class="block-title"><a href="/kontakt" class="block-title-link">Ihr Ansprechpartner</a></h3>
                        
        <div class="content clearfix">
          <p>
	<img alt="" class="media-image attr__typeof__foaf:Image img__fid__36320 img__view_mode__pw_file_portrait_m attr__format__pw_file_portrait_m attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__" src="https://www.abgeordnetenwatch.de/sites/abgeordnetenwatch.de/files/gregor_pressefoto.jpg" style="padding: 5px; margin: 2px; float: left; width: 100px; height: 150px;" title="" typeof="foaf:Image" /></p>
<p>
	<strong>Gregor Hackmack</strong>
</p>
<p>
	Ihr Gesprächspartner zu den Themen: Lobbyismus, Transparenz in der deutschen Politik und Demokratie.
</p>
<p>
	So erreichen Sie mich:<br />
	040 317 69 10 26<br /><a href="mailto:info@abgeordnetenwatch.de">info@abgeordnetenwatch.de</a>
</p>
        </div>
    </div>
  </div>
</section>  </div>
</div>
  </div>
</div>
</div>

<div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="6" data-hidewcol="" id="tb-megamenu-column-28" class="tb-megamenu-column span6  mega-col-nav" class="tb-megamenu-column span6  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-3" class="tb-megamenu-subnav mega-nav level-1 items-3">
  <li  data-id="4039" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega" class="tb-megamenu-item level-2 mega">
  <a href="/ueber-uns/presse" >
        
    Pressespiegel          </a>
  </li>

<li  data-id="4040" data-level="2" data-type="menu_item" data-class="mobile-only" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mobile-only" class="tb-megamenu-item level-2 mega mobile-only">
  <a href="/ueber-uns/presse/pressemitteilungen" >
        
    Pressemitteilungen          </a>
  </li>

<li  data-id="4735" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega" class="tb-megamenu-item level-2 mega">
  <a href="/presse/download" >
        
    Grafiken & Logo          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4738" data-level="1" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="justify" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mega-align-justify dropdown" class="tb-megamenu-item level-1 mega mega-align-justify dropdown">
  <a href="/ueber-uns"  class="dropdown-toggle">
        
    Über uns          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child" class="tb-megamenu-submenu dropdown-menu mega-dropdown-menu nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-showblocktitle="1" data-class="" data-width="3" data-hidewcol="" id="tb-megamenu-column-29" class="tb-megamenu-column span3  mega-col-nav" class="tb-megamenu-column span3  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--pw_about_menu_block-block_1" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <div class="block block-views block-pw-about-menu-block-block-1 block-views-pw-about-menu-block-block-1 odd block-without-title" id="block-views-pw-about-menu-block-block-1">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                                
        <div class="content clearfix">
          <div class="view view-pw-about-menu-block view-id-pw_about_menu_block view-display-id-block_1 view-dom-id-ed8abe11a4e1143600b2e78dea830717">
        
  
  
      <div class="view-content">
        <div class="clearfix push-bottom-s">
      
  <h3 class="views-field views-field-title">        <a href="/was-wir-wollen-das-ziel">Das Ziel: Was wir wollen</a>  </h3>  
          <a href="/was-wir-wollen-das-ziel"><img typeof="foaf:Image" src="/sites/abgeordnetenwatch.de/files/styles/pw_megamenu_span3/public/hand_was_wir_wollen_0.jpg?itok=Cr-5XNDV" width="215" height="144" /></a>    
  <div class="views-field views-field-field-image-copyright copyright push-bottom-xs">        &nbsp;  </div>  
          
	Unsere Vision ist eine selbstbestimmte Gesellschaft. Diese wollen wir befördern durch mehr Beteiligungsmöglichkeiten und Transparenz in der Politik.

    
  <div class="views-field views-field-view-node more-link">        <a href="/was-wir-wollen-das-ziel">weiterlesen</a>  </div>  </div>
    </div>
  
  
  
  
  
  
</div>        </div>
    </div>
  </div>
</div>  </div>
</div>
  </div>
</div>

<div  data-showblocktitle="1" data-class="" data-width="3" data-hidewcol="" id="tb-megamenu-column-30" class="tb-megamenu-column span3  mega-col-nav" class="tb-megamenu-column span3  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--pw_about_menu_block-block_2" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <div class="block block-views block-pw-about-menu-block-block-2 block-views-pw-about-menu-block-block-2 even block-without-title" id="block-views-pw-about-menu-block-block-2">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                                
        <div class="content clearfix">
          <div class="view view-pw-about-menu-block view-id-pw_about_menu_block view-display-id-block_2 view-dom-id-ed1e76c027ee12b2a23b6f16c5d8d00f">
        
  
  
      <div class="view-content">
        <div class="clearfix push-bottom-s">
      
  <h3 class="views-field views-field-title">        <a href="/der-weg-was-wir-machen">Der Weg: Was wir machen</a>  </h3>  
          <a href="/der-weg-was-wir-machen"><img typeof="foaf:Image" src="/sites/abgeordnetenwatch.de/files/styles/pw_megamenu_span3/public/teaserimage/stock_bundestag_plenarsaal.jpg?itok=N7RP_sBa" width="215" height="144" /></a>    
  <div class="views-field views-field-field-image-copyright copyright push-bottom-xs">        ©ablock  </div>  
          
	abgeordnetenwatch.de ist der direkte Draht von Bürgerinnen und Bürgern zu den Abgeordneten und Kandierenden, also "Bürger fragen - Politiker antworten".  Der öffentliche Dialog schafft Transparenz und sorgt für eine Verbindlichkeit.

    
  <div class="views-field views-field-view-node more-link">        <a href="/der-weg-was-wir-machen">weiterlesen</a>  </div>  </div>
    </div>
  
  
  
  
  
  
</div>        </div>
    </div>
  </div>
</div>  </div>
</div>
  </div>
</div>

<div  data-showblocktitle="1" data-class="" data-width="3" data-hidewcol="" id="tb-megamenu-column-31" class="tb-megamenu-column span3  mega-col-nav" class="tb-megamenu-column span3  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <div  data-type="block" data-block="views--pw_about_menu_block-block_3" class="tb-megamenu-block tb-block tb-megamenu-block" class="tb-megamenu-block tb-block tb-megamenu-block">
  <div class="block-inner">
    <div class="block block-views block-pw-about-menu-block-block-3 block-views-pw-about-menu-block-block-3 odd block-without-title" id="block-views-pw-about-menu-block-block-3">
  <div class="block-inner clearfix">
    <div class="content-wrapper">
                                
        <div class="content clearfix">
          <div class="view view-pw-about-menu-block view-id-pw_about_menu_block view-display-id-block_3 view-dom-id-8ed3270caf09bff2c0f10ff8820e1dab">
        
  
  
      <div class="view-content">
        <div class="clearfix push-bottom-s">
      
  <h3 class="views-field views-field-title">        <a href="/unsere-erfolge">Die Erfolge: Was wir bereits erreicht haben</a>  </h3>  
          <a href="/unsere-erfolge"><img typeof="foaf:Image" src="/sites/abgeordnetenwatch.de/files/styles/pw_megamenu_span3/public/erfolg_haende-5952_140_1.jpg?itok=2D80SQcg" width="215" height="144" /></a>    
  <div class="views-field views-field-field-image-copyright copyright push-bottom-xs">        &nbsp;  </div>  
          
	Lobbyisten-Hausausweise transparent gemacht, Nebeneinkünfte enttarnt, Abgeordnetenrücktritt angestoßen. Unsere größten Erfolge aus über 10 Jahren abgeordnetenwatch.de hier im Überblick.

    
  <div class="views-field views-field-view-node more-link">        <a href="/unsere-erfolge">weiterlesen</a>  </div>  </div>
    </div>
  
  
  
  
  
  
</div>        </div>
    </div>
  </div>
</div>  </div>
</div>
  </div>
</div>

<div  data-class="" data-width="3" data-hidewcol="" id="tb-megamenu-column-34" class="tb-megamenu-column span3  mega-col-nav" class="tb-megamenu-column span3  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-1 items-7" class="tb-megamenu-subnav mega-nav level-1 items-7">
  <li  data-id="4736" data-level="2" data-type="menu_item" data-class="mobile-only" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mobile-only" class="tb-megamenu-item level-2 mega mobile-only">
  <a href="/der-weg-was-wir-machen" >
        
    Der Weg - Was wir machen          </a>
  </li>

<li  data-id="4739" data-level="2" data-type="menu_item" data-class="mobile-only" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mobile-only" class="tb-megamenu-item level-2 mega mobile-only">
  <a href="/was-wir-wollen-das-ziel"  title="Ziele, die abgeordnetenwatch.de erreichen will">
        
    Das Ziel - Was wir wollen          </a>
  </li>

<li  data-id="4740" data-level="2" data-type="menu_item" data-class="mobile-only" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mobile-only" class="tb-megamenu-item level-2 mega mobile-only">
  <a href="/unsere-erfolge"  title="Unsere größten Erfolge - was wir in über 10 Jahren schon erreicht haben">
        
    Die Erfolge - Was wir schon erreicht haben          </a>
  </li>

<li  data-id="4741" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="/ueber-uns/mehr/finanzierung"  class="mega-group-title">
        
    Finanzierung          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-32" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-4" class="tb-megamenu-subnav mega-nav level-2 items-4">
  <li  data-id="4742" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mehr/finanzierung" >
        
    Unsere Finanzen          </a>
  </li>

<li  data-id="4754" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mehr/finanzierung/parlamentwatch-eV" >
        
    Jahresbericht          </a>
  </li>

<li  data-id="4744" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/spendenformular" >
        
    Spenden          </a>
  </li>

<li  data-id="4745" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/forderer-werden" >
        
    Förderer werden          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4746" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="1" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega mega-group" class="tb-megamenu-item level-2 mega mega-group">
  <a href="/ueber-uns/mehr/mitwirkende"  class="mega-group-title">
        
    Menschen          <span class="caret"></span>
          </a>
  <div  data-class="" data-width="" class="tb-megamenu-submenu mega-group-ct nav-child" class="tb-megamenu-submenu mega-group-ct nav-child">
  <div class="mega-dropdown-inner">
    <div  class="tb-megamenu-row row-fluid" class="tb-megamenu-row row-fluid">
  <div  data-class="" data-width="12" data-hidewcol="0" id="tb-megamenu-column-33" class="tb-megamenu-column span12  mega-col-nav" class="tb-megamenu-column span12  mega-col-nav">
  <div class="tb-megamenu-column-inner mega-inner clearfix">
        <ul  class="tb-megamenu-subnav mega-nav level-2 items-4" class="tb-megamenu-subnav mega-nav level-2 items-4">
  <li  data-id="4747" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mehr/mitwirkende" >
        
    Das Team          </a>
  </li>

<li  data-id="4748" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/mehr/kuratorium" >
        
    Unser Kuratorium          </a>
  </li>

<li  data-id="4749" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/ueber-uns/jobs" >
        
    Jobs          </a>
  </li>

<li  data-id="4750" data-level="3" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-3 mega" class="tb-megamenu-item level-3 mega">
  <a href="/kontakt" >
        
    Kontakt          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="4751" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega" class="tb-megamenu-item level-2 mega">
  <a href="/ueber-uns/impressum" >
        
    Impressum          </a>
  </li>

<li  data-id="5968" data-level="2" data-type="menu_item" data-class="" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-2 mega" class="tb-megamenu-item level-2 mega">
  <a href="/urheberrechtshinweise" >
        
    Urheberrechtshinweise          </a>
  </li>
</ul>
  </div>
</div>
</div>
  </div>
</div>
</li>

<li  data-id="5828" data-level="1" data-type="menu_item" data-class="mobile-only" data-xicon="" data-caption="" data-alignsub="" data-group="0" data-hidewcol="0" data-hidesub="0" class="tb-megamenu-item level-1 mega mobile-only" class="tb-megamenu-item level-1 mega mobile-only">
  <a href="/user"  class="mobile-only" title="Login">
        
    Anmelden          </a>
  </li>
</ul>
      </div>
  </div>
        </div>
    </div>
  </div>
</div>  </div>
';

  $export['html_menu_block'] = $fe_block_boxes;

  return $export;
}
