#include <stdio.h>
#define TAM 100

int main() {
	float A[TAM];
	
	for(int i = 0; i < TAM; i++) {
		scanf("%f", &A[i]);
	}
	
	for(int i = 0; i < TAM; i++) {
		if(A[i] <= 10) {
			printf("A[%d] = %.1f\n", i, A[i]);
		}		
	}
	
	return 0;
}