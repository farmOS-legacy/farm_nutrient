<?php
/**
 * @file
 * farm_nutrient.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_nutrient_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function farm_nutrient_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_farm_plan_type().
 */
function farm_nutrient_default_farm_plan_type() {
  $items = array();
  $items['nutrient'] = entity_import('farm_plan_type', '{
    "type" : "nutrient",
    "label" : "Nutrient Management Plan",
    "weight" : 0,
    "rdf_mapping" : []
  }');
  return $items;
}
