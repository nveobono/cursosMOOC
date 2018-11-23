<?php
/**
*los arrays asociativos tienen llaves definidas por el programador
*todas llaves de un arrys asociativo deben de ser string
*/
$numeros = [
  'uno'     => 1,
  'dos'     => 2,
  'tres'    => 3,
  'cuatro'  => 4,
  'cinco'   => 5,
];
//las llaves son las llaves
//una var_dump($numeros[2]) es un error php
var_dump($numeros);

var_dump($numeros['dos']);
var_dump($numeros['cinco']);

 ?>
