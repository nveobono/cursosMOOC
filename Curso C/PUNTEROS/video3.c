/*
	Comprobar si un numero es par o impar
*/
#include<stdio.h>

int main(){
	int numero, *p_numero;
	
	do{
		printf("\nIntroduce un numero por pantalla: ");
		scanf("%i",&numero);
		p_numero = &numero;
	
		if(*p_numero % 2 == 0){
			printf("%i  es par",*p_numero);
			printf("\n%i esta en la posicon: %p", *p_numero, p_numero);
		}else{
			printf("%i  no es par",*p_numero);
			printf("\n%i esta en la posicon: %p", *p_numero, p_numero);
		}
	}while((numero != 0));
	
}
