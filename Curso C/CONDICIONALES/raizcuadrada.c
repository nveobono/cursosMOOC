/*
	imprimir la raiz cuadrada de un numero y muestre mensaje si es raiz negativa i.e es numero complejo
*/

#include<stdio.h>
#include<math.h>

#define raizcuadrada 1/2

int main(){
	
	float numero1, raiz;
	
	printf("Introduce un numero en pantalla: ");
	scanf("%f",&numero1);
	
	raiz = sqrt(numero1);
	
	if(raiz > 0){
		printf("No tinene raiz imaginaria y el resultado es: %.3f",raiz);
	}else{
		printf("Tinene raiz imaginaria y el resultado es: %.3f",raiz);
	}
}
