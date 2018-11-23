/*
	DETERMINAR SI UN NUMERO ES PAR O IMPAR
*/

#include<stdio.h>

#define DOS 2
int main(){
	
	int numero;
	
	printf("Introduce un munero en pantalla: "); 
	scanf("%i",&numero);
	
	if(numero%2==0){
		puts("numero par");
	}else{
		puts("numero impar");
	}
	
	return 0;
}
