/**
 * @file
 *
 * Add an <a-scene> tag as a child of #vr-scene element.
 */

(function ($) {
  Drupal.behaviors.aframeScene = {
    attach: function (context, settings) {
      $(".vr-scene").wrapInner("<a-scene></a-scene>");
    }
  };
})(jQuery);
