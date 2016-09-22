/*
Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
For licensing, see LICENSE.html or http://ckeditor.com/license
*/

/*
 * This file is used/requested by the 'Styles' button.
 * The 'Styles' button is not enabled by default in DrupalFull and DrupalFiltered toolbars.
 */

if(typeof(CKEDITOR) !== 'undefined') {

  CKEDITOR.config.templates = 'custom';
  CKEDITOR.addStylesSet( 'drupal', [
    {
      name : 'Paragraph',
      element : 'p',
      attributes : {
        'style' : 'font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0 0 10px;'
      }
    },
    {
      name : 'Paragraph (No space-after)',
      element : 'p',
      attributes : {
        'style' : 'font-family: Arial, Helvetica, Sans-Serif; color: #4d4d4d; font-size: 15px; line-height: 21px; margin: 0;'
      }
    },
    {
      name : 'Link',
      element : 'a',
      attributes : {
        'style' : 'color: #f63; text-decoration: none; font-weight: bold;',
        'target' : '_blank'
      }
    }
  ]);
  CKEDITOR.addTemplates( 'custom', {
  	// The name of sub folder which hold the shortcut preview images of the
  	// templates.
    imagesPath: CKEDITOR.getUrl( CKEDITOR.plugins.getPath( 'templates' ) + 'templates/images/' ),
  
  	// The templates definitions.
  	templates: [
      {
        title: 'Image container with ©opyright',
        image: 'template_default_3.gif',
        description: 'A container with an image and a subline floating to the left.',
        html: '<div class="file-image float-left">'
              +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_3.gif">'
              +'<div class="copyright">©opyright</div>'
              +'</div>'
      },
      {
        title: 'Image container with ©opyright',
        image: 'template_default_4.gif',
        description: 'A container with an image and a subline floating to the right.',
        html: '<div class="file-image float-right">'
              +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_4.gif">'
              +'<div class="copyright">©opyright</div>'
              +'</div>'
      },
      {
        title: 'TEST Image container with ©opyright',
        image: 'template_default_2.gif',
        description: 'A container with an image and a subline floating to the right.',
        html: '<div class="file-image float-right">'
              +'<img src="/sites/all/modules/contrib/ckeditor/ckeditor/plugins/templates/templates/images/template_default_4.gif">'
              +'<div class="copyright">©opyright</div>'
              +'</div>'
      }
  	]
  });



  // CKEDITOR.on( 'instanceReady', function( ev ) {
  //   console.log('instanceReady triggered');
  //   // Ends self-closing tags the HTML5 way, like <br>.
  //   // ev.editor.dataProcessor.writer.selfClosingEnd = '>';


  //   var dataProcessor = ev.editor.dataProcessor,
  //       dataFilter = dataProcessor && dataProcessor.dataFilter,
  //       htmlFilter = dataProcessor && dataProcessor.htmlFilter;

  //   // This rewrites incoming (GET, viewing) data
  //   if (dataFilter) {
  //     dataFilter.addRules({
  //       elements: {
  //         'p': function (element) {
  //           element.attributes['style'] = 'font-size: 24px;';
  //           return element;
  //         }
  //       }
  //     });
  //   }
  // });


  // CKEDITOR.on('instanceReady', function (e) {
  //   console.log('test');
  //   e.editor.dataProcessor.dataFilter.addRules({
  //     elements: {
  //       'p': function (element) {
  //         element.attributes['style'] = 'font-size: 24px;';
  //         return element;
  //       }
  //     }
  //   });
  // });

  // CKEDITOR.plugins.add( 'sample1', {
  //   afterInit: function( editor ) {
  //     console.log('test2');
  //     editor.dataProcessor.dataFilter.addRules({
  //       elements: {
  //         'p': function (element) {
  //           element.attributes['style'] = 'font-size: 24px;';
  //           return element;
  //         }
  //       }
  //     });
  //   }
  // });

}