//estructuras en C

#include<stdio.h>

struct Persona{
	char nombre[20];
	int edad;	
} persona1 = {"Ernesto", 26}, persona2 = {"Leslie", 22}, persona3, persona4;

int main(){
	printf("1. Introduce tu nombre: ");
	gets(persona3.nombre);
	printf("1. Introduce tu edad: ");
	scanf("%i",&persona3.edad);
	
	fflush(stdin); //vaciamos el bufer lleno para poder recoger introducir corectamente los datos en pantalla
	
	printf("\n\n1. Introduce tu nombre: ");
	gets(persona4.nombre);
	printf("1. Introduce tu edad: ");
	scanf("%i",&persona4.edad);
	
	printf("**************************************\n\n");
	printf("\nSu nombre es: %s", persona3.nombre);
	printf("\nTu edad es: %i\n", persona3.edad);
	
	printf("\nSu nombre es: %s", persona4.nombre);
	printf("\nTu edad es: %i", persona4.edad);
	
		
	
	printf("\n**************************************\n\n");
	
	printf("Su nombre es: %s", persona1.nombre);
	printf("\nTu edad es: %i\n", persona1.edad);
	
	printf("\nSu nombre es: %s", persona2.nombre);
	printf("\nTu edad es: %i", persona2.edad);
}
