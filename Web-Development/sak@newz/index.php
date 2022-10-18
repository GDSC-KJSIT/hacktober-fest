<?php
$url = 'https://newsapi.org/v2/everything?q=tesla&from=2022-09-15&sortBy=publishedAt&apiKey=94889eaffbe94de2ac20ea8e89581c53';
$response = file_get_contents($url);
$NewsData = json_decode($response);
?>


<!doctype html>
<html lang="en">

<head>
	<!-- Required meta tags -->
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">

	<!-- Bootstrap CSS -->
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">
	<link rel="shortcut icon" href="favicon.png" type="image/x-icon">
	<title>Newzzz</title>

	<!-- styling -->
	<style>
		body {
			font-family: 'Times New Roman', Times, serif;
		}

		.muted-text {
			font-size: 0.9em;
			color: rgb(0, 0, 0, 0.7);
		}

		.linktonews {
			text-indent: 10%;
			color: inherit;
			text-decoration: none;
			transition: 200ms;
		}

		.linktonews:hover {
			color: black;
			text-shadow: 0 0 1px;
		}
	</style>
</head>

<body>

	<!-- Navbar  -->
	<header>
		<nav class="navbar navbar-expand-lg navbar-light bg-light">
			<div class="container">
				<a class="navbar-brand fw-bold" href="index.php" style="font-family: 'Cairo'; font-size: 2em;">Newz</a>

				<button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
					<span class="navbar-toggler-icon"></span>
				</button>

				<div class="collapse navbar-collapse" id="navbarSupportedContent">
					<ul class="navbar-nav me-auto mb-2 mb-lg-0">
						<li class="nav-item">
							<a class="nav-link" href="#">Travel</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="#">Food</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="#">Technology</a>
						</li>
						<li class="nav-item">
							<a class="nav-link" href="#">Business</a>
						</li>
					</ul>

					<form class="d-flex">
						<input class="form-control me-2" type="search" placeholder="Search" aria-label="Search">
						<button class="btn btn-outline-dark" type="submit">Search</button>
					</form>
				</div>
			</div>
		</nav>
	</header>

	<!-- Heading  -->
	<div class="text-center fst-italic fw-bold" style="font-size: 3em; margin: 5vh auto;">
		Headlines
	</div>

	<!-- News Container  -->
	<div class="container">
		<?php
		foreach ($NewsData->articles as $News) {
			// if news doenst have image linked then it isn't displayed
			if ($News->urlToImage != false) {

		?>
				<div class="row" style="margin: 5vh auto;">
					<div class="col-md-3">
						<a target="_blank" href="<?php echo $News->url ?>"><img class="img-thumbnail" src="<?php echo $News->urlToImage ?>" alt="News Thumbnail"></a>
					</div>
					<div class="col-md-9">
						<h2><?php echo $News->title ?></h2>
						<h5><a target="_blank" href="<?php echo $News->url ?>" class="linktonews"> <?php echo $News->description ?></a></h5>
						<div class="d-flex">
							<h6><span class="muted-text">Author :</span> <?php echo $News->author ?></h6>
							<h6 class="mx-5"><span class="muted-text">Published :</span> <?php echo $News->publishedAt ?></h6>
						</div>
					</div>
				</div>
		<?php };
		} ?>
	</div>

	<!-- Bootstrap Bundle with Popper -->
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/js/bootstrap.bundle.min.js" integrity="sha384-MrcW6ZMFYlzcLA8Nl+NtUVF0sA7MsXsP1UyJoMp4YLEuNSfAP+JcXn/tWtIaxVXM" crossorigin="anonymous"></script>

</body>

</html>