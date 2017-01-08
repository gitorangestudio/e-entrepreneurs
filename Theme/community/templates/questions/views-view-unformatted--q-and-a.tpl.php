
<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>


<section id="questions" data-speed="10" data-type="background">
 <div class="container">
    <div class="row">
       <div class="col-md-8 col-md-offset-2 section-heading animated"  data-animation="fadeInUp" data-animation-delay="0">
          <h1 style="text-align:center">QUESTIONS AND ANSWERS</h1>
          <p class="line">&nbsp;</p>
          <div class="questions-r">
              
            <?php foreach ($rows as $id => $row): ?>
				<div class="views-row">
                <?php print $row; ?>
				</div>
            <?php endforeach; ?>
              
          </div>
       </div>
    </div>
	 <div class="row" style="text-align:center;margin-top: 30px;"><a href="questions-answers" class="view-all">ALL QUESTIONS AND ANSWERS</a></div>
 </div>
</section>