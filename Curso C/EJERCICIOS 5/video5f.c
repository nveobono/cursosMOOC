/*
	Hacer un programa que calcule areas de trapecios
*/
#include<stdio.h>

int main(){
	int base_M, base_m, area, altura;
	
	printf("Introduce la base mayor: "); scanf("%i", &base_M);
	printf("Introduce la base manor: "); scanf("%i", &base_m);
	printf("Introduce la Altura: "); scanf("%i", &altura);
	
	area = ((base_m + base_M)* altura)/2;
	printf("\nEl area del trapecio es: %i", area); 
	return 0;
}
