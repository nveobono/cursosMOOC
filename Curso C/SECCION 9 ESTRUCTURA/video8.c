#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct info_direccion{
	char direccion[30];
	char ciudad[30];
	char provincia[30];
};

struct empleada{
	char nombre[30];
	struct info_direccion dir_empleo;
	double salario[30];
}usuario[100];

int main(){
	
	int tope, i, aux, aux1;
	float mayor = 0.0;
	do{
		printf("Introduce el numero tope de atletas: ");
		scanf("%i",&tope);
	}while(!((tope < 101)&&(tope > 0)));
	
	for(i=0; i<tope; i++){
		fflush(stdin);
		printf("\n %i. Introduce tu nombre: ", i+1);
		gets(usuario[i].nombre);

		printf("\n %i. Introduce tu direccion: ",i+1);
		gets(usuario[i].dir_empleo.direccion);
		
		printf("\n %i. Introduce tu cuidad: ",i+1);
		gets(usuario[i].dir_empleo.ciudad);
		
		printf("\n %i. Introduce tu provincia: ",i+1);
		gets(usuario[i].dir_empleo.provincia);
		
		printf("\n %i. Introduce tu salario: ",i+1);
		scanf("%lf",&usuario[i].salario);
		printf("\n");
	}
	
	for(i=0; i<tope; i++){
		fflush(stdin);
		printf("\n %i. Tu nombre: %s", i+1,usuario[i].nombre);

		printf("\n %i. Tu direccion: %s",i+1,usuario[i].dir_empleo.direccion);
		
		printf("\n %i. Tu cuidad: %s",i+1,usuario[i].dir_empleo.ciudad);
		
		printf("\n %i. Tu provincia: %s",i+1,usuario[i].dir_empleo.provincia);
		
		printf("\n %i. Tu salario: %.2lf",i+1,usuario[i].salario);
		printf("\n");
	}
	
	system("pause");
	return 0;
}
