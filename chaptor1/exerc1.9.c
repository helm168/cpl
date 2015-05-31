#include <stdio.h>

int main() {
	int meetbackspace;
	int c;
	meetbackspace = 0;
	while((c = getchar()) != EOF) {
		if(meetbackspace == 1 && c == ' ') {
			continue;
		};
		if(c == ' ') {
			meetbackspace = 1;
		} else {
			meetbackspace = 0;
		};
		putchar(c);
	}
	return 0;
}	
