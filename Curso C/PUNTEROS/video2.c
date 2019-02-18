/*
	Hacer una variable de tipo int, otra de tipo float y por ultimo de tipo char,
	almacena datos en cada una de las variables, posteriormente indicar la posicion de
	memoria donde se encuentran guardadaa los datos de cada variable. Con punteros
*/
#include<stdio.h>

int main(){
	
	int n = 10, *p_n;
	p_n = &n;
	float n1 = 23.455, *p_n1;
	p_n1 = &n1;
	char c = 'a', *p_c;
	p_c = &c;

	printf("\nentero: %i",n);

	printf("\nEntero: %i",*p_n);
	
	printf("\n\nPosicion: %p",n);
	
	printf("\nPosicion: %p",p_n);

	
	
	printf("\n\nfloat: %f",n1);
	printf("\nfloat: %f",*p_n1);

	printf("\nDato");	
	printf("\nfloat: %p",n1);
	
	printf("\nfloat: %p",p_n1);
	

	printf("\n\ncaracter: %c",c);

	printf("\ncaracter: %c",*p_c);
	
	printf("\ncaracter: %p",c);
	
	printf("\ncaracter: %p",p_c);
	
	
	
	return 0;
}
