// JavaScript Document

jQuery(document).ready(function($) {
   $('body.classification-term #primary-nav ul.menu li a[href="/classifications"]').parent('li').addClass('active-trail');
   $(".inventory-nav .pane-content > ul").addClass('list-unstyled facet-list');
   $(".menu-list #collapse li").children('ul').hide();
   $(".menu-list #collapse li").on('click', function (event) {
      $(this).children('ul').stop().slideToggle(350);
      $(this).toggleClass("open");
      event.stopPropagation();
   });
})
// Replacing active-trail class on terms that may hae been removed by panels term-view