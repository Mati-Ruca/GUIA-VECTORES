//7) El usuario ingresa datos de 5 microprocesadores. Se cuenta con su precio (float) y su velocidad en
//gigahertz (float). Mostrar en pantalla si el microprocesador más caro es también el más rápido, o no.

#include <stdio.h>

int main(){

	int i, maximo, maxprecio, maxvel;
	float precio[5], GHz[5];
	
	for (i=0 ; i<5 ; i++){
		printf ("precio: ");
		scanf ("%f",&precio[i]);
		printf ("velocidad en GHz: ");
		scanf ("%f",&GHz[i]);
	}
	
	maximo = 0;
	
	for (i=0 ; i<5 ; i++){
		if (precio[i]>maximo){
			maximo = precio[i];
			maxprecio = i;
			
		}
	}
	
	maximo = 0;
	
	for (i=0 ; i<5 ; i++){
		if (GHz[i]>maximo){
			maximo = GHz[i];
			maxvel = i;
		}
	}
	
	if (maxvel == maxprecio){
		printf ("el procesador mas caro es el mas veloz. ");
	}
	else{
		printf ("el procesador mas veloz es el de la posicion %d, no el mas caro.",maxvel);
	}
	
	
	
	return 0;
}