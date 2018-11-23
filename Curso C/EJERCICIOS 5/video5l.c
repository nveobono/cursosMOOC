/*
	Calcular la cantidad de segundos que están incluidos en el numero de horas, minutos y segundos ingresados por el usuario
*/
#include<stdio.h>

int main(){
	int horas, minutos, segundos, tiempo1, tiempo2, tiempo3;
	
	printf("Numero de horas: ");scanf("%i", &horas);
	printf("Numero de minutos: ");scanf("%i", &minutos);
	printf("Numero de segundos: ");scanf("%i", &segundos);
	
	tiempo1 = horas * 3600;
	tiempo2 = minutos * 60;
	tiempo3 = tiempo1 + tiempo2 + segundos;
	
	printf("La cantidad de segundos es: %i", tiempo3);
	
	return 0;
}
