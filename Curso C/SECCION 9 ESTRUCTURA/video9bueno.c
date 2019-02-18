/*
	Hace 2 estructuras una llamada promedio que tendra los siguientes miembros:
		nota1, nota2, nota3
	el otro sera llamado alumno y tendra:
		monbre, sexo, edad y que la estructura promedio esté anidada en alumno
		pedir los datos, pantalla y mostrar la media de las notas del alumno.
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX 3

struct notas{
	float nota1;
	float nota2;
	float nota3;
};

struct alumnos{
	char nombre[30];
	char sexo[1];
	int edad;
	struct notas media;
}usuario;

int main(){
	float promedio = 0;
	
	printf("-- Introduce tus datos --\n");
	printf("Tu nombre: ");
	gets(usuario.nombre);
	printf("\nTu sexo: ");
	gets(usuario.sexo);
	printf("\nTu edad: ");
	scanf("%i",&usuario.edad);
	fflush(stdin);
	printf("\nTu primera nota: ");
	scanf("%f",&usuario.media.nota1);
	printf("\nTu segunda nota: ");
	fflush(stdin);
	scanf("%f",&usuario.media.nota2);
	printf("\nTu tercera nota: ");
	fflush(stdin);
	scanf("%f",&usuario.media.nota3);
	
	promedio = (usuario.media.nota1 + usuario.media.nota2 + usuario.media.nota3)/ MAX;
	
	printf("Tu nombre: %s", usuario.nombre);
	printf("\nTu sexo: %s", usuario.sexo);
	printf("\nTu edad: %i", usuario.edad);
	printf("\nTu promedio: %.2f", promedio);
	
}
