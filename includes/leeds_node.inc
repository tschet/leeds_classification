<?php
/**
 * Created by PhpStorm.
 * User: tschet
 * Date: 8/10/15
 * Time: 11:03 AM
 */
global $user;

$customNode = new stdClass();

$customNode->type = 'page';
node_object_prepare($customNode);
$customNode->uid = $user->uid;
$customNode->name = $user->name;

$customNode->title = 'Leeds Classifications';
$customNode->body['und'][0]['value'] = '<p>This site is utilizing the <a href="http://ris.leeds.ac.uk/info/31/research_equipment_and_infrastructure/162/equipment_classification">Leeds Equipment Classification system</a> developed at the <a href="http://www.leeds.ac.uk/">University of Leeds</a>.</p>';
$customNode->body['und'][0]['summary'] = '';
$customNode->body['und'][0]['format'] = 'filtered_html';

$customNode->menu['enabled'] = 1;       // 1 to enable providing a link in main menu
$customNode->menu['link_title'] = 'Leeds Classification';
$customNode->menu['description'] = '';
$customNode->menu['parent'] = 'main-menu:classifications';
$customNode->menu['weight'] = 5;

$customNode->path['alias'] = 'classifications/leeds-classifications';

node_submit($customNode);
node_save($customNode);