/*
	Mayor de edad
*/
#include<stdio.h>

int main(){
	char nombre[30], sexo[1];
	int edad;
	
	printf("Introduzca tu nombre: "); gets(nombre);
	printf("Introduzca tu sexo: "); gets(sexo);
	printf("Introduzca tu edad: "); scanf("%i",&edad);
	
	if((edad > 18)&&(strcmp(sexo, "m")== 0)){
		
		printf("\n Eres mayor de edad, %s",nombre);
		
	}else if((edad > 18)&&(strcmp(sexo, "f")== 0)){
		
		printf("\n Eres mayor de edad, %s",nombre);
	}else{
		printf("\n NO Eres mayor de edad, %s",nombre);
	}
	
		
	return 0;
}
