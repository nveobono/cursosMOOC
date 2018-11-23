/* Directivas del preporcesador y Variables
Directivas del preporcesador continenen las librerias y las macros

*/
#include<stdio.h> //libreria estandar de entradas y salidas en pantalla
#include<String.h>
#include<math.h>
#include<stdlib.h>

//definimos una macro, una macro nos ayuda a definir las variables que usaremos a los largo del programa

#define PI 3.1416 //macro

int y = 5; //variable global, la puedo usar en todo el programa

int main(){
	int x = 10; //variable local, solo la puedo usar dentro de la funcion main
	int suma = 0;
	float suma1 = 0;
	
	
	suma = PI + x;
	suma1 = PI + x;
	printf("La suma es: %i\n", suma); //con %i la indico que tengo un valor que quiro imprimir y que ese valor es un integer
	printf("La suma es: %f\n", suma1);//con %f la indico que tengo un valor que quiro imprimir y que ese valor es un float o real
	printf("La suma es: %.2f\n", suma1);//con el %.nf, donde el n indica numero de numeros que imprime despues del punto, me imprime la parte entre mas n decimales, haciendo un redondeo del resultado
	return 0;
}
