#include <stdio.h>
#define LIN 12
#define COL 12

int main() {
	int colunaEscolhida;
	float m[LIN][COL], soma=0, media=0;
	char operacao;
	
	scanf("%d", &colunaEscolhida);
	scanf(" %c", &operacao);
	
	for(int i = 0; i < LIN; i++) {
		for(int j = 0; j < COL; j++) {
			scanf("%f", &m[i][j]);
		}
	}
	
	for(int i = 0; i < COL; i++) {
		soma = m[i][colunaEscolhida] + soma;
	}
	
	if (operacao == 'M') {
		media = soma / COL;
		printf("%.1f\n", media);
	} else {
		printf("%.1f\n", soma);
	}
	
	return 0;
}