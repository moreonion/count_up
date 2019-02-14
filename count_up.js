(function($) {

Drupal.behaviors.count_up = {
  attach: function(context, settings) {
    context.querySelectorAll('.count-up').forEach(function(element) {
      var s = settings.count_up[element.id];
      var calcVal = function() {
        return Math.round((Date.now() / 1000 - s.initial_time) / s.interval * s.increment + s.initial_value);
      };
      var o = new Odometer($.extend({}, {
        el: element,
        value: calcVal(),
      }, s.odometer_settings));;
      var update = function() { 
        o.update(calcVal());
        window.setTimeout(update, s.update_interval_ms);
      };
      update();
    });
  },
};

})(jQuery);
