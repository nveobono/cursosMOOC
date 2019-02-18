/*
	Pedir una cadena de caracteres al usuario e indicar el numero de veces que aparece la vocales a,e,i,o,u en la cadena
*/

#include<stdio.h>
void cuentaVocales(char *);

int main(){
	char nombre[20];
	
	printf("Digite su nombre: ");
	gets(nombre);
	
	cuentaVocales(nombre);
	
	return 0;	
}
//ernesto\0
void cuentaVocales(char *s){
	int a = 0;
	int e = 0;
	int i = 0;
	int o = 0;
	int u = 0;
	while(*s){ //mientras que s no sea nulo
		switch(*s){
			case 'a':
					a++; break;
			case 'e':
					e++; break;
			case 'i':
					i++; break;
			case 'o':
					o++; break;
			case 'u': 
					u++; break;	
		}
		s++;
	}
}
