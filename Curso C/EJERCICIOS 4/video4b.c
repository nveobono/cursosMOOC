//entradas y salidas de datos

#include<stdio.h>

int main(){
	
	//caracter
	char caracter;
	//string
	char nombre[50];
	char nombre1[50];
	
	
	printf("Introduzca un caracter en pantalla: ");
	scanf("%c",&caracter);
	printf("Has introducido el valor: %c",caracter);
	printf("\n");
	
	printf("Introduzca un nombre en pantalla: ");
	scanf("%s",&nombre); //cuando encuentra un espacio no guarda lo siguiente
	printf("Has introducido el nombre: %s",nombre);
	printf("\n");
	
	printf("Introduzca un nombre en pantalla: ");
	gets(nombre1); //guarda todo lo introducido
	printf("Has introducido el nombre: %s",nombre1);
	printf("\n");
	
	
	return 0; 
}
