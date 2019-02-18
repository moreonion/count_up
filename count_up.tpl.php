<?php if (isset($children['count_up_title'])): ?>
<h2><?php echo render($children['count_up_title']); ?></h2>
<?php endif; ?>
<?php echo render($children); ?>
<div class="count-up" id="<?php echo $element['#id']; ?>"></div>
