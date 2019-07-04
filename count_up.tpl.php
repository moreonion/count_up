<?php if (isset($children['count_up_title'])): ?>
<h2><?php echo render($children['count_up_title']); ?></h2>
<?php endif; ?>
<div class="count-up-wrapper">
  <div class="count-up" id="<?php echo $element['#id']; ?>"></div>
  <?php if (isset($children['count_up_unit'])): ?>
  <?php echo render($children['count_up_unit']); ?>
  <?php endif; ?>
</div>
<?php echo render($children); ?>
