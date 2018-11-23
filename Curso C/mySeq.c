#include <stdio.h>

int main(){
	printf("Vamos a tomar algunos valores\n");
	int inicio;
	scanf("%d", &inicio);
	printf("Has introducido %d \n", inicio);
	int incremento;
	scanf("%d", &incremento);
	printf("Has introducido %d \n" , incremento);
	int final;
	scanf("%d", &final);
	printf("Has introducido %d \n", final);
	
	/*for(inicio; inicio<=final; inicio ++){
		printf("%d\n", inicio);
	}*/
	while(inicio <= final){
		printf("%d\n", inicio);
		inicio = inicio + incremento;
	}
	
}
