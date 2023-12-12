#include <stdio.h>
#define TAM 20

int main() {
	int N[TAM], posicao=0;
	
	for(int i = 0; i < TAM; i++) {
		scanf("%d", &N[i]);
	}
	
	for(int i = 1; i <= TAM; i++) {
		posicao = TAM - i;
		printf("N[%d] = %d\n", i-1, N[posicao]);
	}
	
	return 0;
}