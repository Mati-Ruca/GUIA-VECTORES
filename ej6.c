//6) El usuario ingresa el DNI (entero) de 10 estudiantes y su calificación (float). Muestre en
//pantalla el DNI de los estudiantes que aprobaron.

#include <stdio.h>

int main(){
	
	int dni[10], i;
	float calificacion[10];
	
	printf ("Ingrese el dni de un alumno y a continuacion su calificacion. Repita el proceso 10 veces\n");
	
	for (i=0 ; i<10 ; i++){
		printf ("dni: ");
		scanf ("%d",&dni[i]);
		printf ("calificacion: ");
		scanf ("%f",&calificacion[i]);
	}
	
	for (i=0 ; i<10 ; i++){
		if (calificacion[i] >= 6){
			printf ("el alumno con el dni %d esta aprobado.\n\n", dni[i]);
		}
    }
	return 0;
}