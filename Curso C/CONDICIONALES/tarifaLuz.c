/*
	Visualizar la tarifa de la luz segun el gasto de corriente electrica.
	Para un gasto menor de 1000 Kwxh, la tarifa es 1.2, entre 1000 y  I.850Kwxh es 1.0 y mayor de 1.850Kwxh 0.9
*/

#include<stdio.h>

#define	TARIFA1 1.2
#define	TARIFA2 1.0
#define	TARIFA3 0.9

int main(){
	float gasto, tasa;
	
	printf("Introduce el total del gasto de energía: "); scanf("%.2f", &gasto);
	
	if(gasto < 1000){
		tasa = TARIFA1;	
	}
	if(gasto >1000 && gasto<1850){
		tasa = TARIFA2;
	}
	if(gasto > 1850){
		tasa = TARIFA1;	
	}
	
	printf("La tasa a pagar es: %.2f", tasa);
	
	return 0;
}
