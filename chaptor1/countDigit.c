#include <stdio.h>

main() {
	int c, nwhite, nother;
	int digits[10];
	int i;

	for(i = 0; i < 10; i++) {
		digits[i] = 0;
	}
	
	nwhite = nother = 0;
	while((c = getchar()) != EOF) {
		if(c >= '0' && c <= '9') {
			digits[c - '0']++;
		} else if(c == ' ' || c == '\t' || c == '\n') {
			nwhite++;
		} else {
			nother++;
		}
	}
	printf(" digits =");
	for(i = 0; i < 10; i++) {
		printf(" %d", digits[i]); 
	}
	printf(", nwhite = %d", nwhite);
	printf(", nother = %d\n", nother);
}
