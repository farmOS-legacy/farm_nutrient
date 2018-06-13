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

  // Exported field_instance: 'farm_plan-nutrient-field_farm_files'.
  $field_instances['farm_plan-nutrient-field_farm_files'] = array(
    'bundle' => 'nutrient',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_table',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'farm_plan',
    'field_name' => 'field_farm_files',
    'label' => 'Files',
    'required' => 0,
    'settings' => array(
      'description_field' => 1,
      'file_directory' => 'farm/plan/nutrient',
      'file_extensions' => '',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_filefield_widget',
      'settings' => array(
        'progress_indicator' => 'bar',
      ),
      'type' => 'file_mfw',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'farm_plan-nutrient-field_farm_notes'.
  $field_instances['farm_plan-nutrient-field_farm_notes'] = array(
    'bundle' => 'nutrient',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'farm_plan',
    'field_name' => 'field_farm_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'farm_plan-nutrient-field_farm_season'.
  $field_instances['farm_plan-nutrient-field_farm_season'] = array(
    'bundle' => 'nutrient',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally link this plan to a season. You can manage these options in the <a href="/admin/structure/taxonomy/farm_season">Seasons</a> vocabulary.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'farm_plan',
    'field_name' => 'field_farm_season',
    'label' => 'Season',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date range');
  t('Define the date range for this nutrient management plan.');
  t('Files');
  t('Notes');
  t('Optionally link this plan to a season. You can manage these options in the <a href="/admin/structure/taxonomy/farm_season">Seasons</a> vocabulary.');
  t('Season');

  return $field_instances;
}
