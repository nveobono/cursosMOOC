//PASAR DE GRADOS CELSIUS A FAHRENHEIT
#include <stdio.h>

#define PI 3.141592

int main(){
	
	float radio, longitud, aux = 2, diametro, long2;
	
	printf("introduce el radio de la circunferencia: ");
	scanf("%f",&radio);
	printf("\nHa introducido el valor: %.4f", radio);
	
	longitud = aux * PI * radio;
	
	printf("\n La longitud de la circunferencia  es: %.4f",longitud);
	
	printf("\nintroduce el diametro de la circunferencia: ");
	scanf("%f",&diametro);
	printf("\nHa introducido el valor: %.4f", diametro);
	
	long2 = PI * diametro;
	
	printf("\n La longitud de la circunferencia  es: %.4f",long2);
	return 0;
}
