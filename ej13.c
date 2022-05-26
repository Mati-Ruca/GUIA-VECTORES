//13) Dado un vector con 5 enteros, imprima en pantalla si es monótono o no, es decir si todos los números
//son crecientes, decrecientes o ninguno de los anteriores.

#include <stdio.h>


int main(){

	int A[5], cre= 0, decre= 0, i;
	
	for(i=0 ; i<5 ; i++){
    	printf("ingrese valor: ");
    	scanf("%d",&A[i]);
	}

	for (i=0 ; i<5 ; i++){
		if (i>0 && A[i] > A[i-1]){
			cre++;
		}
	}
	
	for (i=0 ; i<5 ; i++){
		if (i>0 && A[i] < A[i-1]){
			decre++;
		}
	}

	if (cre == 4){
		printf ("El vector es monotono creciente. ");
	}

	if (decre == 4){
		printf ("El vector es monotono decreciente. ");
	}
	
	if (cre!=4 && decre!=4){
		printf ("El vector no es monotono. ");
	}
	
	
	return 0;

}
