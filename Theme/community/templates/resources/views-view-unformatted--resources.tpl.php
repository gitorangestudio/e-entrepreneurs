<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
 
 
$vocabulary = taxonomy_vocabulary_machine_name_load('resources');
$terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid)); 


//dsm($view);

function checkExist($term_nids_array, $view){
      
    $nid_array = array();
    foreach($view->result as $key => $value){
      $nid_array[] = $value->nid;
    }
    //dsm($view->result);
    //dsm($nid_array);
    $true = 0;
    foreach ($term_nids_array as $key => $value) {
        if(in_array($value, $nid_array)){
          $true++;
        }
    }

    if($true > 0)
      return TRUE;
    else
      return FALSE;
}

?>

<section id="portfolio">
         <div class="container">
            <div class="row">
               <div class="col-md-12 section-heading animated" style="text-align:center" data-animation="fadeInUp" data-animation-delay="0">
                  <h1>Resources</h1>
                  <p class="line">&nbsp;</p>
               </div>
            </div>
            <!-- Portfolio Nav Starts -->
            <div class="row">
               <div class="col-md-12 animated" data-animation="fadeInUp" data-animation-delay="100">
                  <div id="options">
                     <ul id="filters" class="option-set clearfix" data-option-key="filter">
            <li><a href="#filter" data-option-value="*" class="selected">All</a></li>
            <?php
            
              foreach($terms as $term){
                
                $term_title = $term->name;
                $term_title1 = str_replace('&', '-', $term_title);
                $term_title1 = str_replace(' ', '-', $term_title);
                $check_array  = taxonomy_select_nodes($term->tid);
                //dsm($check_array);

                if(!empty($check_array)){
                  if(checkExist($check_array, $view)){
                    print '<li><a href="#filter" data-option-value=".'. $term_title1 .'">'. $term_title .'</a></li>';
                  }
                }
                
              }
            ?>
                     </ul>
                  </div>
               </div>
            </div>
          
            <!-- Portfolio Nav Ends --> 
            </div>
            <!-- AJAX Portfolio Details --> 
            <div class="portfolio-detail"></div>
            <!-- AJAX Portfolio Details --> 
            <div class="container">
            <!-- Portfolio Thumbs Starts -->
            <div class="row" id="container-thumbs">
              
            <?php foreach ($rows as $id => $row): ?>
                <?php print $row; ?>
            <?php endforeach; ?>
              
      </div>
            <div class="row" style="text-align:center;margin-top: 30px;">
                 <a href="resources" class="view-all">ALL Resources</a>
             </div>   
    <!-- Portfolio Thumbs Ends --> 
   </div>
  </section>