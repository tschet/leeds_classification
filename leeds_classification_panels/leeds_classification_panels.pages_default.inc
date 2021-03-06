<?php

/**
 * @file
 * Bulk export of pages_default objects generated by Bulk export module.
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function leeds_classification_panels_default_page_manager_handlers() {
    $handlers = array();

    $handler = new stdClass();
    $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
    $handler->api_version = 1;
    $handler->name = 'term_view__classification';
    $handler->task = 'term_view';
    $handler->subtask = '';
    $handler->handler = 'panel_context';
    $handler->weight = 1;
    $handler->conf = array(
        'title' => 'Classification',
        'no_blocks' => 0,
        'pipeline' => 'standard',
        'body_classes_to_remove' => '',
        'body_classes_to_add' => 'classification-term',
        'css_id' => '',
        'css' => '',
        'contexts' => array(),
        'relationships' => array(
            0 => array(
                'identifier' => 'parent',
                'keyword' => 'parent',
                'name' => 'term_parent',
                'type' => 'parent',
                'context' => 'argument_term_1',
                'id' => 1,
            ),
        ),
        'name' => 'classification',
        'access' => array(
            'plugins' => array(
                0 => array(
                    'name' => 'term_vocabulary',
                    'settings' => array(
                        'machine_name' => array(
                            'leeds_classification' => 'leeds_classification',
                        ),
                    ),
                    'context' => 'argument_term_1',
                    'not' => FALSE,
                ),
            ),
            'logic' => 'and',
        ),
        'panels_breadcrumbs_state' => 1,
        'panels_breadcrumbs_titles' => 'Equipment Classifications',
        'panels_breadcrumbs_paths' => 'classifications',
        'panels_breadcrumbs_home' => 1,
    );
    $display = new panels_display();
    $display->layout = 'bootstrap_twocol_stacked';
    $display->layout_settings = array();
    $display->panel_settings = array(
        'style_settings' => array(
            'default' => NULL,
            'middle' => NULL,
            'top' => NULL,
            'left' => array(
                'column_type' => 'col-lg',
                'column_size' => '9',
                'offset_type' => 'col-lg-offset',
                'offset_size' => '0',
            ),
            'right' => array(
                'column_type' => 'col-lg',
                'column_size' => '3',
                'offset_type' => 'col-lg-offset',
                'offset_size' => '0',
            ),
            'bottom' => NULL,
        ),
        'right' => array(
            'style' => 'bootstrap_region',
        ),
        'left' => array(
            'style' => 'bootstrap_region',
        ),
    );
    $display->cache = array();
    $display->title = '';
    $display->uuid = '07b43726-d454-42f4-9046-e7743fd4a078';
    $display->content = array();
    $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-06a72519-98da-423d-b5a6-82201c66dd2c';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'leeds_inventory-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'arguments' => array(
            'term_node_tid_depth' => '%term:tid',
        ),
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '06a72519-98da-423d-b5a6-82201c66dd2c';
    $display->content['new-06a72519-98da-423d-b5a6-82201c66dd2c'] = $pane;
    $display->panels['left'][0] = 'new-06a72519-98da-423d-b5a6-82201c66dd2c';
    $pane = new stdClass();
    $pane->pid = 'new-7e08e1dd-7950-4cc2-bee2-1e71f4de6f05';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'leeds_term_children-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'arguments' => array(
            'tid' => '%term:tid',
            'tid_1' => '',
        ),
        'override_title' => 1,
        'override_title_text' => '%term:name Sub-classifications',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7e08e1dd-7950-4cc2-bee2-1e71f4de6f05';
    $display->content['new-7e08e1dd-7950-4cc2-bee2-1e71f4de6f05'] = $pane;
    $display->panels['right'][0] = 'new-7e08e1dd-7950-4cc2-bee2-1e71f4de6f05';
    $pane = new stdClass();
    $pane->pid = 'new-a986329d-68e6-4435-b8a5-f9543a9d45f7';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'leeds_term_children-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'arguments' => array(
            'tid' => '%parent:tid',
            'tid_1' => '%term:tid',
        ),
        'override_title' => 1,
        'override_title_text' => 'Related Classifications',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a986329d-68e6-4435-b8a5-f9543a9d45f7';
    $display->content['new-a986329d-68e6-4435-b8a5-f9543a9d45f7'] = $pane;
    $display->panels['right'][1] = 'new-a986329d-68e6-4435-b8a5-f9543a9d45f7';
    $pane = new stdClass();
    $pane->pid = 'new-8cc2fe15-4b9e-46dc-b7c2-6796a276f90b';
    $pane->panel = 'top';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'taxonomy_term:description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
        'view_mode' => 'full',
        'context' => 'argument_term_1',
        'override_title' => 1,
        'override_title_text' => '',
        'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
        'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cc2fe15-4b9e-46dc-b7c2-6796a276f90b';
    $display->content['new-8cc2fe15-4b9e-46dc-b7c2-6796a276f90b'] = $pane;
    $display->panels['top'][0] = 'new-8cc2fe15-4b9e-46dc-b7c2-6796a276f90b';
    $display->hide_title = PANELS_TITLE_FIXED;
    $display->title_pane = 'new-8cc2fe15-4b9e-46dc-b7c2-6796a276f90b';
    $handler->conf['display'] = $display;
    $handlers['term_view__classification'] = $handler;

    return $handlers;
}
