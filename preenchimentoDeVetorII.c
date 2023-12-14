#include <stdio.h>
#define TAM 1000

int main() {
	int N[TAM], T;
	
	scanf("%d", &T);
	
	for (int i = 0; i < TAM; i++) {
		N[i] = i % T;
		printf("N[%d] = %d\n", i, N[i]);
	}
	
	return 0;
}
