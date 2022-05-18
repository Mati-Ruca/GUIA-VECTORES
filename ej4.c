//4) Permita el ingreso de 10 enteros positivos. Recorra el vector y todo número par que
//encuentre reemplácelo por cero. Muestre en pantalla el resultado.

#include <stdio.h>

int main(){

	unsigned int a[10], i;
	
	printf ("ingrese 10 numeros: \n(los que sean pares seran cambiados por un 0)\n");
	
	for (i=0 ; i<10 ; i++){
		scanf ("%d",&a[i]);
		if (a[i]%2 == 0){
			a[i] = 0;
		}
	}
	
	for (i=0 ; i<10 ; i++){
		printf ("%d ",a[i]);
	}
	
	return 0;
}