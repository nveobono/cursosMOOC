/*

*/

#include<stdio.h>

int main(){
	char nombre[30], cristiano[20];
	
	printf("Introduzca tu nombre: "); gets(nombre);
	printf("Introduzca tu creencia: "); gets(cristiano);
	
	if(strcmp(cristiano, "cristianismo")== 0){
		printf("\n Eres Cristiano, %s",nombre);
	}else{
		printf("\n No Eres Cristiano, %s",nombre);
	}
	
		
	return 0;
}
