/*
	Arrays en estructuras
*/
#include<stdio.h>

struct Persona{
	char nombre[20];
	int edad;	
} personas[5];

int main(){
	int i;
	for(i=0; i<5; i++){
		fflush(stdin);
		printf("%i Introduce tu nombre: ",i+1);
		gets(personas[i].nombre);
		printf("%i Introduce tu edad: ",i+1);
		scanf("%i",&personas[i].edad);
		printf("\n");
	}
	for(i=0; i<5; i++){
		printf("\n%i Tu nombre es: %s", i+1, personas[i].nombre);
		printf("\n%i Tu edad es: %i", i+1, personas[i].edad);
		printf("\n");
	}
	return 0;
}
