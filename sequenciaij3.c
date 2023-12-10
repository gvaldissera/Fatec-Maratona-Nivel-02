#include <stdio.h>

int main() {
	int i, j, X=7, Y=5;
	
	for (i = 1; i <= 9; i += 2) {
		
		for (j = X; j >= Y; j--) {
			printf("I=%d J=%d\n", i, j);
		}
		X += 2;
		Y += 2;
	}
	
	return 0;
}