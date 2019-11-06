<?php 

if(isset($_GET['lang'])){$langFile = $_GET['lang']; 
						     setcookie('lang',$_GET['lang']);}
elseif(isset($_COOKIE['lang'])) {$langFile = $_COOKIE['lang'];}						     
else{ $langFile = "en";}

require_once('includes/languages/'.$langFile.'.php');

?>
<!DOCTYPE html >
<html lang='<?php $langFile ?>'>
<head>
	<meta charset="utf-8" >
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<title> <?php 
		$title = getTitle();
        $parties = explode(" ", $title);
        if($langFile == 'ar'){
        for($i = count($parties)-1 ; $i >= count($parties)-1; $i-- ){echo $langArray[$parties[$i]]." ";}
        }else{
        for($i = 0 ; $i < count($parties); $i++ ){echo $langArray[$parties[$i]]." ";}
        }

		
       
		 ?>
		 	
    </title>
	<link rel="stylesheet" href="<?php echo $css; ?>bootstrap.min.css">
	<link rel="stylesheet" href="<?php echo $css; ?>uikit.min.css">
	<link rel="stylesheet" type="text/css" href="<?php echo $css; ?>backend.css">
</head>
<body>

