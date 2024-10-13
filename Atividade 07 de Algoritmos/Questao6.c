#include <stdio.h>

void compara (char String1[], char String2[]) {
	
	int i, igual = 0;
	
	for (i = 0; i < 20; i++) {
		
		if (String1[i] == '\0' || String2[i] == '\0') {
			
			break;	
		}
		
		if (String1[i] == String2[i]) {
			
			igual++;
			printf ("Caractere igual: %c\n", String1[i]);
		} 		
	}
	
	printf ("Essas string tem %d igual(is)", igual);
}

int main () {
	
	char String1[20] = "Hello";
	char String2[20] = "World";
	
	compara(String1, String2);
	
	return 0;
}
