/*
	Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar
	cuales son numeros pares y su posicion en memoria
*/

#include<stdio.h>

int main(){
	int *p_vector,i,vector[10] = {2,4,5,6,78,3,4,6,89,67};
	
	p_vector = vector;
	
	for(i = 0; i<10; i++){
		if(*p_vector % 2 == 0){
			printf("Dato n[%i]: %i es par",i,*p_vector);
			printf("\nPosicion: %p",p_vector);
			printf("\n\n");
		}else{
			printf("Dato n[%i]: %i es impar",i,*p_vector);
			printf("\nPosicion: %p",p_vector);
			printf("\n\n");
		}

		p_vector ++;
	}
	
	return 0;
}
