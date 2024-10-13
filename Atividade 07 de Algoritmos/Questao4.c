#include <stdio.h>

int main () {
	
	int i;
	float array[10];
	
	for (i = 0; i < 10; i++) {
		
		printf ("Array[%i]: %x", i, &array[i]);
		printf ("\n");
	}
	
	return 0;
}
