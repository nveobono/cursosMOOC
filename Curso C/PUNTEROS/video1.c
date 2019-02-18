//Demostrar el uso básico de punteros

/*
	Posiciones de menoria
	punteros
*/

#include<stdio.h>

int main(){
	int numero = 40;
	int *p_numero;
	
	p_numero = &numero;//&numero = posicion de memoria de numero
	
	//printf("%i",numero); //Dato
	//printf("\n%p",&numero); //posicion en memoria que ocupara el dato

	printf("\n-- Valor de la variable --");
	printf("\nDato: %i",numero);
	printf("\nDato: %i",*p_numero);
	printf("\n\n-- Posicon de memoria --");
	printf("\nPosicion: %p",&numero);
	printf("\nPosicion: %p",p_numero);
}
