/* pedir 2 numeros al usuario y sumarolos, restarlos, multiplicarlos y dividirlos */

#include<stdio.h>

int main(){
	int valor1, valor2, suma = 0, resta = 0, mult = 0, div = 0;
	
	printf("Introduce un numero entero: ");
	scanf("%i" ,&valor1);
	printf("Has introducido: %i\n", valor1);
	
	printf("Introduce un numero entero < que pimero: ");
	scanf("%i",&valor2);
	printf("Has introducido: %i\n", valor2);
	
	/*
	pedir los dos numeros al mismo tiempo
	
	printf("Introduce dos numeros entero: ");
	scanf("%i %i" ,&valor1, &valor2);
	printf("Has introducido: %i %i\n", valor1, valor2);
	*/
	
	suma = valor1 + valor2;
	resta = valor1 - valor2;
	mult = valor1 * valor2;
	div = valor1 / valor2;	
	printf("La suma es: %i\n", suma);
	printf("La Resta es: %i\n", resta);
	printf("La multiplicacion es: %i\n", mult);
	printf("La division es: %i\n", div);
	return 0;
	
}
