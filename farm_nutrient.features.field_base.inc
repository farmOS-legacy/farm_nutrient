<?php
/**
 * @file
 * farm_nutrient.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farm_nutrient_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_farm_total_area_indoor'.
  $field_bases['field_farm_total_area_indoor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_farm_total_area_indoor',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fraction',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'fraction',
  );

  // Exported field_base: 'field_farm_total_area_outdoor'.
  $field_bases['field_farm_total_area_outdoor'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_farm_total_area_outdoor',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'fraction',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'fraction',
  );

  return $field_bases;
}
