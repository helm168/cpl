#include <stdio.h>

int main() {
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\t' || c == ' ' || c == '\\') {
			if(c == '\t') {
				c = 't';
			}else if(c == ' ') {
				c = 'b';
			}else {
				c = '\\';
			} 
			putchar('\\');
		}
		putchar(c);
	}
	return 0;
}
