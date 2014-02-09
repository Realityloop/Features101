<?php
/**
 * @file
 * features101_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function features101_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gallery';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gallery' => 'gallery',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-gallery-block' => array(
          'module' => 'views',
          'delta' => 'gallery-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['gallery'] = $context;

  return $export;
}
