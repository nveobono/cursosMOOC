// imprimir el alfabeto en mayuscula con punteros
#include<stdio.h>

int main(){
	char letra;
	char *p_letra = &letra; //posicon de letra
	for(letra = 'A'; letra <='Z'; letra++){
		printf("%c ",*p_letra);
	}
	return 0;
}
