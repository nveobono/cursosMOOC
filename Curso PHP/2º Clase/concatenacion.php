<?php

$primero = 'Yo quiero';
$segundo = ' un polo de JS';

//concatenacion
var_dump($primero.$segundo);

//podemos concatenar muchos valores
$tercero = ' talla L ';
var_dump($primero.$segundo.$tercero);

$cuarto = 20.99;
var_dump($primero.$segundo.$tercero.$cuarto);
// podemos concatenar diferentes tipos de valores sin tener que hacer un casting.
// en php concatenamos con . y no con + como en java o javascript.
// php puede convertir el string en un numero cuando es posible
$primeros = 'primero';
$segundos = 'segundo';
var_dump($primeros + $segundos);

//pero en el caso siguente si funiona
$uno = '19';
$dos = '12';
var_dump($uno + $dos);

/**
*Es bunea practica NO USAR STRING EN OPERACIONES MATEMÁTICAS
*/

 ?>
