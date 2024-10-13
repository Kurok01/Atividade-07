#include <stdio.h>

void troca (int *A, int *B) {
	
	int aux;
	
	aux = *A;
	*A = *B;
	*B = aux;
}

int main () {
	
	int A = 10, B = 20;
	
	printf ("A = %d\nB = %d\n\n", A, B);
	
	troca(&A, &B);
	
	printf ("A = %d\nB = %d\n", A, B);
	
	return 0;
}
