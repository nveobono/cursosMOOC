//entradas y salidas de datos

#include<stdio.h>

int main(){
	
	int suma = 0;
	int a = 10;
	float b = 15.5;
	char c = 'e';
	
	printf("La suma es = %i", suma);
	printf("\n");
	printf("%i %.1f %c",a,b,c);
	printf("\n");
	//entrada de datos
	int entero;
	float real;
	
	printf("Introduzca un entero en pantalla ");
	scanf("%i",&entero);
	printf("Has introducido el valor: %i",entero);
	printf("\n");
	
	printf("Introduzca un real en pantalla ");
	scanf("%f",&real);
	printf("Has introducido el valor: %.2f",real, " aprox");
	printf("\n"); 
	
	//caracter
	char caracter;
	printf("Introduzca un caracter en pantalla: ");
	scanf("%c",&caracter);
	printf("Has introducido el valor: %c",caracter);
	printf("\n");
	
	//string
	char nombre[50];
	char nombre1[50];
	printf("Introduzca un nombre en pantalla: ");
	scanf("%s",&nombre);
	printf("Has introducido el nombre: %s",nombre);
	printf("\n");
	
	printf("Introduzca un nombre en pantalla: ");
	gets(nombre1);
	printf("Has introducido el nombre: %s",nombre1);
	printf("\n");
	
	
	return 0; 
}
