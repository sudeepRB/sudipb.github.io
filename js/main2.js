

// ADD ACTIVE CLASS TO CURRENT PAGE IN FOOTER

$(".footer-project a").each(function() {   
    if (this.href == window.location.href) {
        $(this).addClass("active");
    }
});





// // ADD "BABY COME BACK" TO PAGE TITLE

// $(function() {
// 	// Get page title
// 	var pageTitle = $("title").text();

// 	// Change page title on blur
// 	$(window).blur(function() {
// 		$("title").text("Baby come back...");
// 	});

// 	// Change page title back on focus
// 	$(window).focus(function() {
// 		$("title").text(pageTitle);
// 	});
// });