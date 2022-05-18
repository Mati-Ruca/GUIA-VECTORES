//3) Permita el ingreso de 5 flotantes. Muestre el vector en pantalla. Luego multiplique todos los
//valores por 1.65 y vuelva a mostrarlos.

#include <stdio.h>

int main(){
	
	float a[5];
	int i;
	printf ("ingrese 5 valores: \n");
	
	for (i=0 ; i<5 ; i++){
		scanf ("%f",&a[i]);
	}
	
	for (i=0 ; i<5 ; i++){
		printf ("%f ",a[i]);
	}
	
	printf ("\n");
	
	for (int i=0 ; i<5 ; i++){
		printf ("%f ",a[i] * 1.65);
	}
	
	
	return 0;
}