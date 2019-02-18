/*
	Deternimar si un numero es primo e imprimir en pantalla su posicion
*/
#include<stdio.h>

int main(){
	int numero, *p_numero;
	
	do{
		printf("\nIntroduce un numero por pantalla: ");
		scanf("%i",&numero);
		p_numero = &numero;
		int i,aux = 0;
	
		for(i = 1; i <= *p_numero; i++){
			if(*p_numero % i == 0){
				aux++;
			}
		}
		if(aux == 2){
			printf("%i  es primo",*p_numero);
			printf("\n%i esta en la posicon: %p", *p_numero, p_numero);
		}else{
			printf("%i  no es primo",*p_numero);
			printf("\n%i esta en la posicon: %p", *p_numero, p_numero);
		}
	}while((numero != 0));
	
}
