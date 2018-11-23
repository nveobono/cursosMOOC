/*
	Calcualr el nuevo salario de un obrero si obtuco un incremento del 25% sobre su salario anterios
*/
#include<stdio.h>

int main(){
	float salarioActual, valorIncremento, salarioFinal;
	
	printf("Introduce el valor de tu salario actual: "); 
	scanf("%f",&salarioActual);
	
	valorIncremento = salarioActual * 0.25;
	salarioFinal = valorIncremento + salarioActual;
	
	printf("Tu salario al aplicar el aumento del 25 porciento es: $%.2f", salarioFinal);
	
	return 0;
}
