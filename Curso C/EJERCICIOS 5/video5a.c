//operador de asignacion

#include<stdio.h>

int main(){
	
	int a,c,b;
	
	a=b=c=10;
	a = a+20; // a +=20;
	// a = a - 5; o podemos ponerlo como a -= 5;
	// a = a * 5; o podemos ponerlo como a *= 5;
	// a = a / 5; o podemos ponerlo como a /= 5;

	printf("El valor de a,b,c es: %i %i %i", a,b,c);
	
	
	return 0;
}
