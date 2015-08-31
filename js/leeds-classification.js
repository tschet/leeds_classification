// JavaScript Document


jQuery(document).ready(function($) {
    $(".classification-page .view-grouping").addClass('col-md-6 col-lg-4');
    $(".classification-page .item-list").children('ul').hide();
    $(".classification-page .item-list h3").on('click', function (event) {
        $(this).parent('.item-list').children('ul').stop().slideToggle(350);
        $(this).toggleClass("open");
        event.stopPropagation();
    });
})