(function ($) {
    $.fn.autoSubmit = function () {
        var form = this;
        $('input, select, textarea', this).change(function() {
            $('[type=submit]', form).hide();
            $(form).submit();
        });
    };

    Drupal.behaviors.autoSubmit = {
        attach: function () {
            $('form.profile-filters').autoSubmit();
        }
    };
})(jQuery);
