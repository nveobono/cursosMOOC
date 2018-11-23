/*
	Calcular la media geometrica de tres numeros
*/
#include<stdio.h>
#include<math.h>

int main(){
	float numero1, numero2, numero3, aux, mediaGeometrica;
	
	printf("Primer Numero : ");scanf("%i", &numero1);
	printf("Segundo Numero : ");scanf("%i", &numero2);
	printf("Tercer Numero : ");scanf("%i", &numero3);
	aux = numero1 + numero2 + numero3;
	mediaGeometrica = pow(aux, 1/3);
	
	printf("La media geometrica es %f", mediaGeometrica);
	return 0;
}
