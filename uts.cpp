* {
box-sizing: border-box;
}
body {
font-family: Arial;
padding: 10px;
background: #15171a;
}
.header h1 {
font-size: 70px;
color: white;
text-align: center;
}
.topnav a {
float: left;
display: block;
color: #f2f2f2;
text-align: center;
padding: 14px 16px;
text-decoration: none;
}
.kotak {
width: 100%;
padding: 10px;
border: 5px solid gray;
border-style: dashed;
border-color: purple;
margin-top: 10px;
margin-bottom: 10px;
text-align: center;
font-size: 12px;
}
ul {
list-style-type: none;
margin: 0;
padding: 0;
width: 100%;
background-color: #f9f9f9;
}
li a {
display: block;
color: #000;
padding: 8px 16px;
text-decoration: none;
}
li a:hover {
background-color: #c200c2;
color: white;
}
.header h5{
padding: 5px;
color: white;
text-align: center;
background: #15171a;
}
.leftcolumn { 
float: left;
width: 25%;
padding-right: 20px;
}
table {
	border: 1px solid;
	width: 100%;
}

th,td {
	text-align: center;
	padding: 8px;
	border-bottom: 1px solid black;
}
.middlecolumn { 
float: left;
width: 50%;
}
.rightcolumn {
float: right;
width: 25%;
padding-left: 20px;
}
.card {
background-color: white;
padding: 20px;
margin-top: 20px;
}
.row:after {
content: "";
display: table;
clear: both;
}
input[type=text] {
width: 100%;
padding: 12px 20px;
margin: 8px ;
box-sizing: border-box;
}
.footer {
padding: 20px;
text-align: center;
background: #15171a;
margin-top: 20px;
}
@media screen and (max-width: 800px) {
.leftcolumn, .rightcolumn, .kotak { 
width: 100%;
padding: 0;
}
}
@media screen and (max-width: 400px) {
.topnav a {
float: none;
width: 100%;
}
}