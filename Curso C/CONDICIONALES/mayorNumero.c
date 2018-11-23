/*
	Calcular el mayor de los numeros leidos del teclado y visualizarlos en pantalla
*/

#include<stdio.h>

int main(){
	int numero1, numero2;
	
	printf("Introduce dos numeros en pantalla: ");
	scanf("%i %i",&numero1,&numero2);
	
	if(numero1 > numero2){
		printf("\nel mayor es: %i",numero1);
	}else{
		printf("\nel mayor es: %i",numero2);
	}
	
	return 0;
}
