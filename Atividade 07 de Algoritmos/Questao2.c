#include <stdio.h>

int main () {
	
	int inteiro, inteiro2;
	
	if (&inteiro > &inteiro2) {
		
		printf ("Inteiro 1: %x", &inteiro);
		
	} else {
		
		printf ("Inteiro 2: %x", &inteiro2);
	}
	
	return 0;
}
