/*
	Dado un vector de 10 elementos escribir un programa en C
	(utilizando punteros) que muestre las direcciones de memoria de
	cada elemento del vector	
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
	int i, vector[]={1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
	int *p_vector;

	p_vector = vector; // p_vector = vector[0];
	for(i = 0; i< 10; i++){
		printf("Dato n[%i]: %i",i,*p_vector);
		printf("\nPosicion: %p",p_vector);
		printf("\n\n");
		p_vector ++;
	}
	
	
}
