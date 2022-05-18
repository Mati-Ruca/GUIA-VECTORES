//5) El usuario ingresa 5 edades (enteras) y 5 sueldos (float), correspondientes a 5 personas.
//Muestre en pantalla los vectores con los valores ingresados. Muestre en qué posición se
//encuentra la persona de más edad y en qué posición se encuentra el mayor sueldo


#include <stdio.h>

int main(){
	
	int edad[5], i, max, maxedad;
	float sueldo[5], maximo;
	
	printf ("ingrese la edad de 5 personas: \n");
		
	for (i=0 ; i<5 ; i++){
		scanf ("%d",&edad[i]);
		
	}
	
	printf ("ingrese el sueldo de las anteriores personas, en orden: \n");
	
	for (i=0 ; i<5 ; i++){
		scanf ("%f",&sueldo[i]);
	}
	printf ("las edades son: \n");
	for (i=0 ; i<5 ; i++){
		printf ("%d ",edad[i]);
	}
	
	printf ("\n");
	printf ("y los sueldos son: \n");
	
	for (i=0 ; i<5 ; i++){
		printf ("%f ",sueldo[i]);
	}
	
	printf("\n\n");
	
	maximo = 0;
	
	for (i=0 ; i<5 ; i++){
		if (edad[i]>maximo){
			maximo = edad[i];
			max = i;
			maxedad = max;
		}
	}
	
	printf ("la persona de mayor edad esta en la posicion %d \n",max);
	
	maximo = 0;
	for (i=0 ; i<5 ; i++){
		if (sueldo[i]>maximo){
			maximo = sueldo[i];
			max = i;
		}
	}
	printf ("el sueldo mas grande esta en la posicion %d \n\n",max);
	
	
	//5 b)
	
	if (maxedad == max){
		printf ("la persona con mayor edad esta en la misma posicion que el mayor sueldo");
	}
	else{
		printf ("la persona de mayor edad esta en una posicion diferente al mayor sueldo");
	}
	
	return 0;
}