/* la sentencia if:
	if(condicion)
		accion
*/
// prueba de visibilidad

#include<stdio.h>

int main(){
	int n2, n1;
	printf("Introduce dos numeros: "); scanf("%i %i", &n1,&n2);
	
	if(n1 % n2 == 0){
		printf("El numero %i es divisible entre %i ", n1,n2);
	} else{
		printf("El numero %i NO es divisible entre %i ", n1,n2);
	}
	
	return 0;
}
