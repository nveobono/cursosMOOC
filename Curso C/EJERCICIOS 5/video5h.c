/*
  Una tieda ofrece un descuento del 15% sobre el total de la compra
  y un cliente desea saber cuanto deberá pagar finalmente por su compra
*/
#include<stdio.h>

int main(){
	float valorCompra, valorDescuento, precioFinal;
	
	printf("Introduce el valor total de la compra: "); 
	scanf("%f",&valorCompra);
	
	valorDescuento = valorCompra * 0.15;
	precioFinal = valorCompra - valorDescuento;
	
	printf("El precio final es: $%.2f", precioFinal);
	return 0;
}
