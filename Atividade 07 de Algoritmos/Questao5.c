#include <stdio.h>

int main () {
	
	int i, j;
	int matriz[3][3];
	
	for (i = 0; i < 3; i++) {
		
		for (j = 0; j < 3; j++) {
			
			printf ("Matriz[%d][%d]: %x", i, j, &matriz[i][j]);
			printf ("\n");
		}
	}
	
	return 0;
}
