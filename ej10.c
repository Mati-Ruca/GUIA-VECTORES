//10) Se cuenta con dos vectores de 8 enteros cada uno. Estos vectores tienen DNIs de jugadores de tenis. Se
//pide ingresar los datos y mostrar en pantalla las parejas, armadas así: el primero de un vector con el último
//del otro, el segundo con el anteúltimo, etc.

#include <stdio.h>

int main(){
	
	int jugador1[8], jugador2[8], i,j; 
	
	printf ("ingrese dni de los jugadores de la primera lista: \n");
	for (i=0 ; i<8 ; i++){
		scanf ("%d",&jugador1[i]);
	}
	printf ("\ningrese dni de los jugadores de la segunda lista: \n");
	for (i=0 ; i<8 ; i++){
		scanf ("%d",&jugador2[i]);
	}
	
	for (i=0 ; i<8 ; i++){
		printf ("%d con %d, ",jugador1[i], jugador2[7-i]);
	}
	
	return 0;
}