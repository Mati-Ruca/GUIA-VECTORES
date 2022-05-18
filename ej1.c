//1) Permita el ingreso de 5 números enteros y guárdelos en un vector. Muestre el vector en
//pantalla, al derecho y al revés.

#include <stdio.h>

int main(){
	
	int i, A[5];
	
	printf ("ingrese 5 numeros: \n");

	for (i=0 ; i<5 ; i++){
		scanf ("%d",&A[i]);
	} 
	
	for (i=0 ; i<5 ; i++){
		printf ("%d ",A[i]);
	}
	
	printf ("\n");
	
	for (i=4 ; i>=0 ; i--){
		printf ("%d ",A[i]);
	}	
	
	
	return 0;
}