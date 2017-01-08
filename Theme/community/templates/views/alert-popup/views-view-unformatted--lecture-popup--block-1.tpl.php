<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


<div class="modal fade" id="lecture-alert-modal">
  <div class="modal-header">
    <a class="lecture-alert-link close" data-dismiss="modal">×</a>
    <h3>A new lecture is out!</h3>
  </div>

	<?php foreach ($rows as $id => $row): ?>
	  <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
	    <?php print $row; ?>
	  </div>
	<?php endforeach; ?>

</div>




<script type="text/javascript">
    jQuery(document).ready(function(){
    	var nid = <?php print $id;?>;
		var status = localStorage.getItem("lecture_alert_" + nid);
		// check time cookie for this popup
		var cookie_time = getCookie("lecture_alert_" + nid + "_time");

		if(status == null && cookie_time != 'true'){
			setTimeout(function(){ 
		        jQuery('#lecture-alert-modal').modal('show');
		    }, 3000);
		}
    	jQuery('.lecture-alert-link').click(function(e){

    		e.preventDefault();
    		if (jQuery('#remindme input[type="checkbox"]').is(":checked")){
				
    			var test = writeCookie("lecture_alert_" + nid + "_time", true, 30);

    		}else{
				localStorage.setItem("lecture_alert_"+nid,true);    			
    		}
    		
    		if(jQuery(this).attr('id') == 'lecture-alert-link') {
    			var url = jQuery('#lecture-alert-link').attr('href');
    			window.location.href = url;
    		}else {
    			return true;
    		}

    		

    	});
    });

	function writeCookie (key, value, minutes) {
	    var date = new Date();

	    // Get unix milliseconds at current time plus number of days
	    date.setTime(+ date + (minutes * 60000)); // * 60 * 1000
	    window.document.cookie = key + "=" + value + "; expires=" + date.toGMTString() + "; path=/";

	    return value;
	};

	function getCookie(name) {
	  var value = "; " + document.cookie;
	  var parts = value.split("; " + name + "=");
	  if (parts.length == 2) return parts.pop().split(";").shift();
	}
</script>