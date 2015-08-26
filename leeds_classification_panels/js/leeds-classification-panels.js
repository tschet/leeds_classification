// JavaScript Document

jQuery(document).ready(function($) {
   $('body.classification-term #primary-nav ul.menu li a[href="/classifications"]').parent('li').addClass('active-trail');
})
// Replacing active-trail class on terms that may hae been removed by panels term-view