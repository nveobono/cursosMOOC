/*

*/
#include<stdio.h>

int main(){
	long dato;
	
	long d = 0;
	long *p_d;
	p_d = &d;
	
	printf("%lu",&dato);
	printf("\n%p",&dato);
	printf("\n\n");
	printf("La direccion de la variable dato es = %p\n", &d);
	printf("El valor de la variable p_d es = %p\n",p_d);
	return 0;
}
