/*
Dada las horas de trabajo de una persona y el valor por hora, calcula su salario e imprimelo
*/

#include<stdio.h>

int main(){
	int horasTrabajadas;
	float valorPorHora, salario;
	
	printf("introduce las horas trabajadas: "); scanf("%i", &horasTrabajadas);
	printf("introduce el valor o precio por hora trabajada: "); scanf("%f", &valorPorHora);
	
	salario = horasTrabajadas * valorPorHora;
	
	printf("Tu salario es de: %.4f",salario);
		
	return 0;
}
