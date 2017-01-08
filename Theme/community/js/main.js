jQuery(document).ready(function () {

    //for resources page
    jQuery("#block-system-main .views-exposed-widgets.clearfix div a:first").addClass('active');

	var url = window.location;
	//alert(url);
	// Will only work if string in href matches with location
	jQuery('ul.nav a[href="'+ url +'"]').parent().addClass('active');

	// Will also work for relative and absolute hrefs
	jQuery('ul.nav a').filter(function() {
		return this.href == url;
	}).parent().addClass('active');
    
    jQuery("#navigation #navs").navgoco({
        caret: '<span class="caret"></span>',
        accordion: false,
        openClass: 'open',
        save: true,
        cookie: {
            name: 'navgoco',
            expires: false,
            path: '/'
        },
        slide: {
            duration: 300,
            easing: 'swing'
        }
    });    
    
    
    
    // Sticky Sidebars
    jQuery('#project-page .panel-panel.right').theiaStickySidebar({
	   additionalMarginTop: 30
    });  

    // collapsable
    var acc = document.getElementsByClassName("accordion");
    var i;

    for (i = 0; i < acc.length; i++) {
        acc[i].onclick = function(){
            this.classList.toggle("active");
          this.nextElementSibling.classList.toggle("show");
        }
    }

    //user levels
    jQuery('#user-level .views-row').each(function(index){
      
      
      var row_id = jQuery(this).attr('level-id');
      var complete = jQuery(this).attr('level-complete');
      var current = jQuery(this).attr('level-current');
      var next = jQuery(this).attr('next-level');
      
      setTimeout(function(){
        
        if(complete == 1){
          var bg = 'green';
          var color = 'white';
        }else{
          var bg = 'rgb(226, 224, 224)';
          var color = '#333';
        }
        
        if(next == 1) {
          var bg = 'white';
          var color = '#333';         
        }
        
        jQuery('#user-level .row-' + row_id).animate({
          'opacity': 1,
          'background-color': bg,
          'color': color
        }, 500, function(){});
        
        jQuery('#user-level .row-' + row_id).addClass('animated slideInRight');
        
        
      }, 300 * index);
      
    });

    //filters
     var $container = jQuery('.view-user-content-pane-details .view-content');
    $container.isotope({
      // options
      itemSelector: '.views-row',
      layoutMode: 'fitRows',
      //transformsEnabled: false,
      getSortData: {
        id: '[goal-id] parseInt',
        points: '[goal-points] parseInt',
        name: '.views-field-title',
        date: function (elem) {
          //console.log('test');
          //console.log(Date.parse($(elem).attr('goal-date')));
            return Date.parse(jQuery(elem).attr('goal-date'));
        }         
      },
      sortAscending: {
        id: true,
        points: false,
        name: true,       
      }
    });
   
    // Filters and sorts
    jQuery('#filters').on( 'click', 'a', function() {
      event.preventDefault();
      var filterValue = jQuery(this).attr('data-filter');
      $container.isotope({ filter: filterValue });
      jQuery('#filters a').removeClass('selected');
      jQuery(this).addClass('selected');
    });  

    jQuery('#sorts').on( 'click', 'a', function(event) {
      event.preventDefault();
      var filterValue = jQuery(this).attr('data-sort-by');
      $container.isotope({ sortBy: filterValue });
      jQuery('#sorts a').removeClass('selected');
      jQuery(this).addClass('selected');    
    }); 
    
    
    // // Popup
    // jQuery('.view-user-content-pane-details .views-row .row-content').on('click', function(){
      
    //   var goal_id = jQuery(this).parent().attr('goal-id');
    //   var url = window.location.protocol + "//" + window.location.host  + "/goal/"+ goal_id +"/tasks?user_id=<?php print $uid;?>" ;
      
      
    //   var ajax_request = jQuery.get( url, function(data) {
        
    //     console.log(url);
        
    //     }).done(function( data ) {
    //       var content = jQuery(data).find('.view-content');
    //       jQuery('#modalGoal .modal-body').html(content);
    //       jQuery("#modalGoal").modal();
    //     });


    // });



    //
    //jQuery('.goal-notcompleted img').gray();
  //jQuery('.not-completed').gray();
  jQuery('.goal-notcompleted img').addClass('grayscale');



});


  
  
    
    
    

