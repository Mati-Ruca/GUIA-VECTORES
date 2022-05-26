#include <stdio.h>

int main()
{
	int A[3];
	int B[10];
	int l,y;
	
	for(int l=0;l<3;l++){
    	printf("ingrese valor de A");
    	scanf("%d",&A[l]);
	}

	for(int y=0;y<10;y++){
    	printf("ingrese valor de B");
    	scanf("%d",&B[y]);
	}
	
	for (int i=0;i<3;i++){
    	for(int j=0;j<10;j++){
    		printf("%d %d, ",A[i],B[j]);    
        	if(A[i]==B[j]){
            	printf("Un elemento en A se encuentra en B\n");
        	}
		}
	}
}