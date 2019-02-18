/*
	Hacer una estructura llamada corredor, en la cual se tendrá los siguientes miembros: nombre, edad, sexo, club.
	Pedir datos al usuario de un corredor y asignarle una categoria de competicion:
	
		- juvenil <= 18 años
		- señor <= 40 años
		- veterano > 40 años
		
	posteriormente imprima todos los datos del corredor, incluido su categoría de competición
*/
#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct corredor{
	char nombre[30];
	int edad;
	char sexo[20];
	char clud[20];
} usuario;

int main(){
	char categoria[20];
	
		printf("\nIntroduce tu nombre: ");
		gets(usuario.nombre);
		printf("\nIntroduce tu edad: ");
		scanf("%i",&usuario.edad);
		
		fflush(stdin);
		
		printf("\nIntroduce tu sexo: ");
		gets(usuario.sexo);
		printf("\nIntroduce tu club: ");
		gets(usuario.clud);
		printf("\n\n");
		
		if(usuario.edad <= 18){
			strcpy(categoria,"JUVENIL");// categoria = juvenil;

		}else if(usuario.edad <= 40){
			strcpy(categoria,"ADULTA");// categoria = juvenil;
		}else{
			strcpy(categoria,"VETERANO");// categoria = juvenil;
		}
		
		printf("\n Datos del corredor: ");
		printf("\nCategoria del Usuario: %s", categoria);
		printf("\nTu nombre: %s",usuario.nombre);
		printf("\nTu edad: %i",usuario.edad);
		printf("\nTu sexo: %s",usuario.sexo);
		printf("\nTu club: %s",usuario.clud);
		
	system("pause");
	return 0;
}
