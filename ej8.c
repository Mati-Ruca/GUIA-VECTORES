//8) Declare un vector de 10 enteros y carguelo con 1 y 0 alternativamente. Es decir, en la primer posición un
//1, en la segunda un 0, en la tercera un 1, en la cuarta un 0... etc. Muestrelo en pantalla para verificar que
//quedó bien cargado.

#include <stdio.h>

int main(){
	
	int A[10];
	
	for (int i=0 ; i<10 ; i++){
		if (i%2 == 0){
			A[i] = 1;
		}
		else {
			A[i] = 0;
		}
	}
	
	for (int i=0 ; i<10 ; i++){
		printf ("%d ",A[i]);
	}
	
	return 0;
}