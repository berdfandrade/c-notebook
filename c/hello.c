#include <stdio.h>

int main () {
	int n;	
	n = 5;

	// Imprime uma linha no começo 
	
	// Faz o loop
	for(int i = 0; i < n; i++){
		printf("\n-"); 
		for(int j = 0; j < i; j++){
			printf("\n|"); 
		}

		  
			
	}
	// Imprime uma linha nova 
	printf("\n");   
	return 0;
}
