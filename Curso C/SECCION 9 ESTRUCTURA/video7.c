/*
	Hacer una estructura llamada atleta:
		nombre
		pais
		numero_medallas
		
		guarda N atletas
		
		devuelve el nombre y pais del atleta com más medallas
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
} usuario[100];

int main(){
	
	int tope, i, aux, aux1;
	float mayor = 0.0;
	do{
		printf("Introduce el numero tope de atletas: ");
		scanf("%i",&tope);
	}while(!(tope > 0));
	
	for(i = 0; i< tope; i++){
		fflush(stdin);
		printf("\n %i. Introduce tu nombre: ", i+1);
		gets(usuario[i].nombre);

		printf("\n %i. Introduce tu pais: ",i+1);
		gets(usuario[i].pais);
		
		printf("\n %i. Introduce tu numero de metallas: ",i+1);
		scanf("%i",&usuario[i].numero_medallas);		
	}
	for(i = 0; i< tope; i++){
		if(usuario[i].numero_medallas > mayor){
			mayor = usuario[i].numero_medallas;
			aux = i;
		}
	}
	
	printf("\n-- DATOS ATLETA CON MÁS MEDALLAS --\n");
	printf("\nTu nombre: %s",usuario[aux].nombre);
	printf("\nTu pais: %s \n",usuario[aux].pais);
	
	system("pause");
	return 0;
}
