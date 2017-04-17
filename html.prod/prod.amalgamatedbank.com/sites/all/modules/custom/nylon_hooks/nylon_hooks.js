(function ($) {
	
  Drupal.behaviors.exampleModule = {
    attach: function (context, settings) {
    
		if($('#webform-client-form-793').length > 0 && $('.page-node-submission-edit').length > 0){
			$("input[type='hidden']").each(function(){
				var name = $(this).attr('name'); // grab name of original
				var value = $(this).attr('value'); // grab value of original
				/* create new visible input */
				var html = '<label>'+name+'</label><input type="text" name="'+name+'" value="'+value+'" />';
				$(this).after(html).remove(); // add new, then remove original input
			});
		}
		
		if($('.node-type-petition #node-segment-landing-page-full-group-s1c1r2').length > 0){
			var maxHeight = 0;
			$("#node-segment-landing-page-full-group-s1c1r2 p").each(function(){
				 if ($(this).height() > maxHeight) { maxHeight = $(this).height(); }
			});
			$("#node-segment-landing-page-full-group-s1c1r2 p").not("#node-segment-landing-page-full-group-s1c1r2 p.butn").height(maxHeight);
		}
		
		if($('#node-segment-landing-page-full-group-s1c1r2').length > 0){
			$('#node-segment-landing-page-full-group-s2c1r2c1 #edit-webform-ajax-submit-793').addClass('btn rounded with-orange-background with-white-text js-click-trigger');
		}
		
  }
};

})(jQuery);
