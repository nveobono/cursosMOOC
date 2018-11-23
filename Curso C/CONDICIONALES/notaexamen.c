/*
	Comprobar si un alumno aprobo o no un examen   
*/
#include<stdio.h>

int main(){
	
	float notaExamen;
	
	printf("introduce la note del examen: "); scanf("%f",&notaExamen);
	
	if((notaExamen <= 10) && (notaExamen >= 5)){
		puts("El alumno ha aprobado"); //puts solo imprime dentro de un condicional
	} else{
		printf("El alumno ha aprobado"); 
	}
	
	return 0;
}
