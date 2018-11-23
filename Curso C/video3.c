//Tipos de datos
#include<stdio.h>

int main(){
	char a = 'a'; //tiene tamaño de 1byte con un rango de 0..255
	short b = -15; //tiene tamañno de 2byte con un rango de -128..127
	int c = 1024; //tiene tamaño de 2byte con un rango de -32768..32767
	unsigned int d = 128;//tiene tamaño de 2byte con un rango de 0..65535
	long e = 123456;//tiene tamaño de 4byte 
	float f = 15.678;//tiene tamaño de 4byte 
	double g = 1151.31518;//tiene tamaño de 8bytes
	
	
	printf("El elemento es : %c\n", a);
	printf("\n");
	printf("El elemento es : %i\n", b);
	printf("El elemento es : %i\n", c);
	printf("El elemento es : %i\n", d);
	printf("El elemento es : %li\n", d);
	printf("El elemento es : %.2f\n", f);
	printf("El elemento es : %.2lf\n", g);	
}
