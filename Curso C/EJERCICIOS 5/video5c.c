//PASAR DE GRADOS CELSIUS A FAHRENHEIT
#include <stdio.h>


int main(){
	
	float valor1, grados, constante = 1.8, num = 32, aux;
	
	printf("introduce los grados celsius: ");
	scanf("%f",&valor1);
	printf("\nHa introducido el valor: %.4f", valor1);
	
	grados = ((valor1 * constante) + num);
	
	printf("\nSu valor en FAHRENHEIT es: %.4f",grados);
	
	return 0;
}
