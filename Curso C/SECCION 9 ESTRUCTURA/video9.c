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
}usuario[10];

int main(){
	int tope, i;
	float numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
	do{
		printf("Introduce el numero tope de alumnos: ");
		scanf("%i",&tope);
	}while(!((tope < 11)&&(tope > 0)));
	
	for(i=0; i<tope; i++){
		fflush(stdin);
		printf("\n %i. Introduce tu nombre: ", i+1);
		gets(usuario[i].nombre);
		
		printf("\n %i. Introduce tu sexo: ", i+1);
		gets(usuario[i].sexo);
		
		printf("\n %i. Introduce tu edad: ",i+1);
		scanf("%i",&usuario[i].edad);

		printf("\n %i. Introduce tu nota %i: ",i+1,i+1);
		scanf("%f", &usuario[i].media.nota1);
		
		printf("\n %i. Introduce tu nota %i: ",i+1,i+1);
		scanf("%f", &usuario[i].media.nota2);
		
		printf("\n %i. Introduce tu nota %i: ",i+1,i+1);
		scanf("%f", &usuario[i].media.nota3);	
		printf("\n");
	}

	printf("\n\n-- Tus datos son --\n\n");
	for(i= 0; i< tope; i++){
		numero1 = (usuario[i].media.nota1 + usuario[i].media.nota2 + usuario[i].media.nota3)/3;
		fflush(stdin);
		printf("Tu nombre: ",usuario[i].nombre);
		printf("\nTu sexo: ",usuario[i].sexo);
		printf("\nTu edad: ",usuario[i].edad);
		printf("\nTu nota media: %.2f \n",numero1);
	}
	
		

	system("pause");
	return 0;
}
