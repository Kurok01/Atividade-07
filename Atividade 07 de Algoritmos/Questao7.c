#include <stdio.h>

void frac (float num, int *inteiro, float *fracionario) {
		
	*inteiro = num;
	*fracionario = num - *inteiro;
} 

int main () {
	
	float num = 25.37;
	int inteiro;
	float fracionario;
	
	frac(num, &inteiro, &fracionario);
	
	printf ("Inteiro: %d\nFracionario: %.2f", inteiro, fracionario);
	
	return 0;
}
