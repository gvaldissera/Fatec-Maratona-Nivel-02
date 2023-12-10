#include <stdio.h>
#define TAM 10

int main() {
	int v[TAM], num;
	
	scanf("%d", &num);
	v[0] = num;
	
	for(int i = 1; i < TAM; i++) {
		v[i] = 2 * v[i - 1];
	}
	
	for(int i = 0; i < TAM; i++) {
		printf("N[%d] = %d\n", i, v[i]);
	}
		
	return 0;
}