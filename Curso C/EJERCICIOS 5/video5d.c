/* Sacar la hipotenusa de un triangulo rectangulo,
pidiendo l usuario el valor de los 2 catetos
*/
#include <stdio.h>
#include <math.h>

int main(){
	
	float valor1, valor2, hipotenusa, aux;
	
	printf("introduce el valor del cateto 1: ");
	scanf("%f",&valor1);
	printf("\nHa introducido el valor: %.4f", valor1);

	printf("\nintroduce el valor del cateto 2: ");
	scanf("%f",&valor2);
	printf("\nHa introducido el valor: %.4f", valor1);
	
	hipotenusa =sqrt(pow(valor1, 2) + pow(valor2, 2));
	printf("\nHa El valor de la hipotenusa es: %.4f", hipotenusa);
		
	
	return 0;
}
