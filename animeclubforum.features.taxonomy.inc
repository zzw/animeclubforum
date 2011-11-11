<?php
/**
 * @file
 * animeclubforum.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function animeclubforum_taxonomy_default_vocabularies() {
  return array(
    'topictype' => array(
      'name' => 'TopicType',
      'machine_name' => 'topictype',
      'description' => '帖子类型',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
