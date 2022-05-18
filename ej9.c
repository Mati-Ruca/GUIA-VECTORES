//9) En dos vectores se tienen los goles de dos equipos en diferentes partidos que tuvieron entre si. En la
//posición 0 del vector equipoA están los goles de un partido por ese equipo y en la misma posición del vector
//equipoB están los goles del otro equipo en ese mismo partido. En la posición 1 de ambos vectores
//tendremos los goles para otro partido, etc. Se pide permitir que el usuario cargue los datos y mostrar
//cuántos empates han ocurrido.

#include <stdio.h>

int main(){
	
	int n;
	
	printf ("ingrese la cantidad de partidos que se jugaron entre los equipos: ");
	scanf ("%d",&n);
	
	int equipoA[n], equipoB[n], i, empates=0, A=0, B=0;
	
	printf ("ingrese la cantidad de goles que anoto cada equipo en cada partido: \n");
	for (i=0 ; i<n ; i++){
		
		printf ("equipo A: ");
		scanf ("%d",&equipoA[i]);
	
		printf ("equipo B: ");
		scanf ("%d",&equipoB[i]);
		
		if (equipoA[i] == equipoB[i]){
			printf("empate\n");
			empates++;
		}
		else{
			if(equipoA[i] > equipoB[i]){ 
				printf ("el ganador es el equipo A\n");
				A++;
			}
			else{
				printf ("el ganador es el equipo B\n");
				B++;
			}
		}
	}	
	
	
	printf ("sucedio/eron %d empate/s entre estos equipos\n",empates);
	
	if (A!=B){
		if (A>B){
			printf ("el ganador general es el equipo A\n");
		}
		else{
			printf ("el ganador general es el equipo B\n");
		}
	}
	else{
		printf ("los equipos tienen la misma cantidad de victorias que de derrotas");
	}
	
	
	return 0;
}