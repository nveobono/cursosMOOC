
#include<stdio.h>

int main(){
	
	char nombre1[50];
	
	printf("Introduzca un nombre en pantalla: ");
	gets(nombre1); //guarda todo lo introducido
	printf("Has introducido el nombre: %s",nombre1);
	printf("\n");
	
	
	return 0; 
}
