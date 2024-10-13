#include <stdio.h>

int main () {
	
	int inteiro = 0, *i;
	float decimal = 0, *f;
	char caractere, *c;
	
	i = &inteiro;
	f = &decimal;
	c = &caractere;
	
	printf ("Inteiro: %d\n", inteiro);
	printf ("Decimal: %f\n", decimal);
	printf ("Caractere: %c\n", caractere);
	
	*i = 1;
	*f = 2.5;
	*c = 'a';
	
	printf ("\n");	
	
	printf ("Inteiro: %d\n", inteiro);
	printf ("Decimal: %f\n", decimal);
	printf ("Caractere: %c\n", caractere);
	
	return 0;
}
