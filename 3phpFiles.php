-------------- index.php------------------------------

<?php
require_once ('connect.php');
if(isset($_POST) & !empty($_POST)){
//	$fname = mysql_real_escape_string($_POST['fname']);
	//$lname = mysql_real_escape_string($_POST['lname']);
//	$email = mysql_real_escape_string($_POST['email']);
	
	$fname =$_POST['fname'];
	$lname =$_POST['lname'];
	$email =$_POST['email'];
	
	
	$gender = $_POST['gender'];
	$age = $_POST['age'];

	$CreateSql = "INSERT INTO `crud` (first_name, last_name, email_id, gender, age) VALUES ('$fname', '$lname', '$email', '$gender', '$age')";
	$res = mysqli_query($connection, $CreateSql) or die(mysqli_error($connection));
	if($res){
		$smsg = "Successfully inserted data, Insert New data.";
	}else{
		$fmsg = "Data not inserted, please try again later.";
	}
}
?>
<!DOCTYPE html>
<html>
<head>
	<title>Insert Operation</title>

</head>
<body>


		<form method="post">
		<h2>Insert User Information</h2>
			
			   
			    
			     Name <input type="text" name="fname" id="input1" placeholder="First Name" />
			   </br>
	  
			     Milldle Name <input type="text" name="lname"  id="input1" placeholder="Last Name" />
		
			    </br>
			     E-Mail <input type="email" name="email"  id="input1" placeholder="E-Mail" />
			    
		        </br>
			<label>Gender</label>
			  
			    <input type="radio" name="gender" id="optionsRadios1" value="male" checked> Male
			  	  
			    <input type="radio" name="gender" id="optionsRadios1" value="female"> Female
	
				</br>
			
			Age
			
				<select name="age">
					<option>Select Your Age</option>
					<option value="20">20</option>
					<option value="21">21</option>
					<option value="22">22</option>
					<option value="23">23</option>
					<option value="24">24</option>
					<option value="25">25</option>
					<option value="24">35</option>
				</select>
			
			</br>
			<input type="submit" value="submit" />
		</form>

</body>
</html>

-------------------------- connection.php-------------------------

<?php
$connection = mysqli_connect('localhost', 'root', '');
if (!$connection){
    die("Database Connection Failed" . mysqli_error($connection));
}
$select_db = mysqli_select_db($connection, 'test');
if (!$select_db){
    die("Database Selection Failed" . mysqli_error($connection));
}


--------------------------------------------- view.php-------------------------
<?php
require_once('connect.php');
$ReadSql = "SELECT * FROM `crud`";
$res = mysqli_query($connection, $ReadSql);
?>
<!DOCTYPE html>
<html>
<head>
	<title>Show all Data</title>


</head>
<body>

	<h2>Show All User Information</h2>
		<table>
		<thead>
			<tr>
				<th>#</th>
				<th>Full Name</th>
				<th>E-Mail</th>
				<th>Gender</th>
				<th>Age</th>
				<th>Extras</th>
			</tr>
		</thead>
		<tbody>
		<?php
		while($r = mysqli_fetch_assoc($res)){
		?>
			<tr>
				<th scope="row"><?php echo $r['id']; ?></th>
				<td><?php echo $r['first_name'] . " " . $r['last_name']; ?></td>
				<td><?php echo $r['email_id']; ?></td>
				<td><?php echo $r['gender']; ?></td>
				<td><?php echo $r['age']; ?></td>
				<td>




					<!-- Modal -->


				</td>
			</tr>
		<?php } ?>
		</tbody>
		</table>

</body>
</html>





