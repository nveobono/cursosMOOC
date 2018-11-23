/*
	Sentencia if de dos alternativas: if else
	
	if(condicion)
		accion1
	else
		accion2
*/

#include<stdio.h>

int main(){

	float nota;
	printf("Introduca tu nota en Pantalla: "); scanf("%f", &nota);
	
	if(nota >= 5){
		puts("FELICIDADES.... HAS APROBADO");
	}else{
		puts("LO SIENTO HAS SUSPENDIDO.... VUELVA A INTENTARLO");
	}
	
	return 0;
}
