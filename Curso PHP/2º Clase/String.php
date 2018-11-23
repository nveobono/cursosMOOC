<?php

$nombreProducto = 'Polo de CSS';
var_dump($nombreProducto);

$nombreProducto = "Polo de CSS";
var_dump($nombreProducto);

$valor = 'Polo de JS';
$primero = 'Quiero un $valor';
var_dump($primero);

$segundo = "Quiero un $valor";
var_dump($segundo);

//Beuna practica, forma más legible y util cuano estemos usando Arrays.
$resultado = "Quiero un {$valor}";
var_dump ($resultado);

 ?>
