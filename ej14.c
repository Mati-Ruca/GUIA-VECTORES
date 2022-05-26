//14) Dado un vector de 8 floats, imprima en pantalla si todos sus elementos son idénticos, o no.

#include <stdio.h>

int main(){
	
	float A[8];
	int i, iguales= 0;
	
	for(i=0 ; i<8 ; i++){
    	printf("ingrese valor: ");
    	scanf("%f",&A[i]);
	}
	
	for (i=0 ; i<8 ; i++){
		if (A[i] == A[i+1]){
			iguales++;
		}
	}
	
	if (iguales == 7){
		printf ("todos sus elementos son identicos");
	}
	else{
		printf ("sus elementos no son identicos");
	}
	
	return 0;
}