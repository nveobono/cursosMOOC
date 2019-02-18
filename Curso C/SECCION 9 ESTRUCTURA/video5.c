/*
	hacer una estructura llamada alumno, en la cual se tendran:
		nombre, edad, promedio
		
		pedir datos al usuario de tres alumnos, comprobar que promedio es mejor y imprime el dato del alumno con el mejor promedio

*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define TOPE 3

struct alumno{
	char nombre[30];
	int edad;
	float promedio;
} usuario[3];

int main(){
	
	int i;
	float mejor = 0.00;
	int aux = 1;
	for(i = 1; i<= TOPE; i++){
		printf("\n %i. Introduce tu nombre: ", i);
		gets(usuario[i].nombre);
		
		fflush(stdin);
		
		printf("\n %i. Introduce tu edad: ",i);
		scanf("%i",&usuario[i].edad);
		
		fflush(stdin);
		
		printf("\n %i. Introduce tu sexo promedio: ",i);
		scanf("%f",&usuario[i].promedio);
		
		fflush(stdin);
	}
	
	for(i = 1; i<= TOPE; i++){
		if(mejor > usuario[i].promedio){
			mejor = usuario[i].promedio;
			aux = i;
		}
	}
	fflush(stdin);
	printf("-- ALUMNO MEJOR PROMEDIO --");
	printf("\nTu nombre: %s",usuario[aux].nombre);
	printf("\nTu edad: %i",usuario[aux].edad);
	fflush(stdin);
	printf("\nTu promedio: %s",usuario[aux].promedio);

	
	system("pause");	
	return 0;
}
