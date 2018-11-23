/*
	Comporbar si un numero es positivo o negativo
*/
#include<stdio.h>

int main(){
	
	float numero;
	printf("Introduca un numero en Pantalla: "); scanf("%f", &numero);
	
	if(numero >= 0){
		printf("El numero introducido es positivo");
	}else{
		printf("El numero introducido es negativo");
	}
	
	return 0;
}
