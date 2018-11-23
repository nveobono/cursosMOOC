<?php

//todas las variables comienzan en PHP con un $
$tres = 3;

// nos proporciona informacion de las variables
var_dump($tres);

echo $tres;

$pi = 3.1416;
var_dump($pi);

var_dump($pi * 5);

/**
*$nombre = 'Luis';
*$Nombre = 'Carlos';
*$_nombre = 'Ricardo';
*$Nom_bre
*$Nom_br3
*$nom-bre = 'Daniel';
*
*$1nombre  // variable invalida
*
*/

$nombre = 'Luis';
$Nombre = 'Carlos';

var_dump($nombre);
var_dump($Nombre);

//boolean
// true o false

$algofalso = false;
var_dump($algofalso);

$algoverdadero = true;
var_dump($algoverdadero);

//Array
$miPrimerArray = [1, 2, 3];
$otroArray = array(4, 4, 6, 7);
var_dump($miPrimerArray);
var_dump($otroArray);

//Asignacion especial
$polos = 2;
var_dump($polos);
$polos = $polos + 1;
var_dump($polos);

//otra forma
$polos += 8;
var_dump($polos);

$polos++;
var_dump($polos);

$polos -= 8;
var_dump($polos);

$polos--;
var_dump($polos);

// cuando uso " " php mira en toda la cadena por si hay alguna variable para imprimir el valor de la variables
$ciudad = 'Madrid';

echo "Hola hoy me gaste $polos euros y fui a $ciudad \n";
var_dump("Hola hoy me gaste $polos euros y fui a $ciudad \n");

// cuando uso ' ' php lo interpreta como un texto

echo 'Hola hoy me gaste $polos euros y fui a $ciudad';
var_dump('Hola hoy me gaste $polos euros y fui a $ciudad');

 ?>
