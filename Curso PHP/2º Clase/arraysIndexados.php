<?php
//arrays indexados
//creacion
$lenguajes = array('HTML', 'CSS', 'JS');
var_dump($lenguajes);

//Otra forma de crear
$lenguales = ['HTML', 'CSS', 'JS'];
var_dump($lenguajes);

//arrays de enteros
$intergers = [1, 2, 3, 4, 5, 6, 7];
var_dump($intergers);
//array de floats
$float = [1.0, 2.2, 3.2, 4.2, 5.3];
var_dump($float);

// introducir variables en un Arrays
//crear un array de variables
$uno = 1;
$dos = 2.2;
$tres = 3.3;
$cuatro = 4.4;
$cinco = 5;
$seis = 6;
$siete = 7;
$arrayVariables = [$uno, $dos, $tres, $cuatro, $cinco, $seis, $siete];
var_dump($arrayVariables);

// en php un array puede contener varios tipos de datos
$arrayTiposDatos = ['Muñeca', 45, $tres, "cama"];
var_dump($arrayTiposDatos);

//Las posiciones de un array se inician de cero

//acceder a una posicion de un array
$html = $lenguajes[0];
var_dump($html);

//si intentamos acceder a una posicion inexistente obtenemos un error en php


 ?>
