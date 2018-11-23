/*
calcular la media aritmetica de tres numeros cualesquiera
*/
#include<stdio.h>

int main(){
	int numero1, numero2, numero3, media;
	printf("intrduce el primer numero: ");scanf("%i", &numero1);
	printf("intrduce el segundo numero: ");scanf("%i", &numero2);
	printf("intrduce el tercer numero: ");scanf("%i", &numero3);
	media = (numero1 + numero2 + numero3)/3;
	printf("La media aritmetica es: %i", media);
	return 0;
}
