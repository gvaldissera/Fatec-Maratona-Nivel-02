#include <stdio.h>
#define TAM 10

int main() {
	int i, X[TAM];
	
	for( i = 0; i < TAM; i++) {
		scanf("%d", &X[i]);
		if(X[i] <= 0) {
			X[i] = 1;
			printf("X[%d] = %d\n", i, X[i]);
		} else {
			printf("X[%d] = %d\n", i, X[i]);
		}
	}
	
	return 0;
}