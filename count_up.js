(function($) {

Drupal.behaviors.count_up = {
  attach: function(context, settings) {
    $('.count-up', context).each(function(i, element) {
      var s = settings.count_up[element.id];
      var calcVal = function(target_ms) {
        return Math.round((target_ms / 1000 - s.initial_time) / s.interval * s.increment + s.initial_value);
      };
      var o = new Odometer($.extend({}, {
        el: element,
        value: calcVal(Date.now()),
      }, s.odometer_settings));
      var update = function() {
        o.update(calcVal(Date.now() + s.update_interval_ms));
        window.setTimeout(update, s.update_interval_ms);
      };
      update();
    });
  },
};

})(jQuery);
