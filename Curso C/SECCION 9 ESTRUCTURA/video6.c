/*
	Un programa que lea el array de una estructura, los datos de n emplados
	de la empresa y que los imprima en pantalla  con mayor y menor salario

*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct empleado{
	char nombre[20];
	char sexo[1];
	float salario;
} usuario[100];

int main(){
	int tope, i, aux, aux1;
	float mayor = 0.0, menor = 9999999999;
	do{
		printf("Introduce el numero tope de empleados: ");
		scanf("%i",&tope);
	}while(!(tope > 0));
	
	for(i = 0; i< tope; i++){
		fflush(stdin);
		printf("\n %i. Introduce tu nombre: ", i+1);
		gets(usuario[i].nombre);

		printf("\n %i. Introduce tu sexo: ",i+1);
		gets(usuario[i].sexo);
		
		printf("\n %i. Introduce tu salario: ",i+1);
		scanf("%f",&usuario[i].salario);		
	}
	for(i = 0; i< tope; i++){
		if(usuario[i].salario > mayor){
			mayor = usuario[i].salario;
			aux = i;
		}
		if(usuario[i].salario < menor){
			menor = usuario[i].salario;
			aux1 = i;
		}	
	}
	
	printf("\n-- DATOS EMPLEADO CON MEJOR SALARIO --\n");
	printf("\nTu nombre: %s",usuario[aux].nombre);
	printf("\nTu edad: %.2f",usuario[aux].salario);
	printf("\nTu promedio: %s",usuario[aux].sexo);
	fflush(stdin);
	printf("\n\n-- DATOS EMPLEADO CON MENOR SALARIO --\n");
	printf("\nTu nombre: %s",usuario[aux1].nombre);
	printf("\nTu edad: %.2f",usuario[aux1].salario);
	printf("\nTu promedio: %s \n",usuario[aux1].sexo);
	
	system("pause");
	return 0;
}
