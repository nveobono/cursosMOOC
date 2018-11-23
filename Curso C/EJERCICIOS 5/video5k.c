/*
Un alaumno desea saber cual sera su calificacion final en la materia de algoritmos.
Dicha calificacion se compone de los siguientes porcentajes: 
		- 55 porciento de sus tres calificaciones parciales
		- 30 porciento de la calificacion del examen final
		- 15 porciento de un trabajo final
*/

#include<stdio.h>

int main(){
	float aux, notaTrabajoFinal, trabajo, primerParcial, segundoParcial, tercerParcial,mediaPacial, totalParcial, examenFinal, examen, total;
	
	
	printf("Introduce la nota del primer parcial: "); scanf("%f",&primerParcial);
	printf("Introduce la nota del segundo parcial: "); scanf("%f",&segundoParcial);
	printf("Introduce la nota del tercer parcial: "); scanf("%f",&tercerParcial);
	printf("Introduce la nota del examen final parcial: "); scanf("%f",&examenFinal);
	printf("Introduce la nota del trabajo final parcial: "); scanf("%f",&notaTrabajoFinal);
	
	aux = primerParcial+ segundoParcial+tercerParcial;
	mediaPacial = aux/3;
	totalParcial = mediaPacial * 0.55;
	
	trabajo = notaTrabajoFinal * 0.15;
	
	examen = examenFinal * 0.30;
	
	total = totalParcial + trabajo + examen;
	
	printf("De los parciales has obtenido un %.2f ", totalParcial);
	printf("del examen un: %.2f ", examen); 
	printf("y del trabajo final un: %f ", trabajo);  
	printf("teniedo una nota total de: %.2f ",total);
	
	return 0;
}
