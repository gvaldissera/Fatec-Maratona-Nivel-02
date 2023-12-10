#include <stdio.h>

int main () {
	int num;
	
	scanf("%d", &num);
	
	for(int i = 0; i < num; i++) {
		int X, Y, soma=0;	
		scanf("%d %d", &X, &Y);
		
		if(X > Y) {
			int temp = X;
			X = Y;
			Y = temp;
		}
		
		for(int j = X + 1; j < Y; j++) {
			if(j % 2 != 0 ) {
				soma += j;
			}
		}
		printf("%d\n", soma);
	}

	return 0;
}