<?php
/**
 * @file
 * farm_nutrient.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farm_nutrient_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'farm_plan-nutrient-field_farm_date_range'.
  $field_instances['farm_plan-nutrient-field_farm_date_range'] = array(
    'bundle' => 'nutrient',
    'deleted' => 0,
    'description' => 'Define the date range for this nutrient management plan.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'short',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => 0,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'farm_plan',
    'field_name' => 'field_farm_date_range',
    'label' => 'Date range',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date range');
  t('Define the date range for this nutrient management plan.');

  return $field_instances;
}
