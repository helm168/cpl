#include <stdio.h>

#define IN 0 /* inside a word. */
#define OUT 1 /* outside a word. */

int main() {
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;
	while((c = getchar()) != EOF) {
		nc++;
		if(c == '\n') {
			nl++;
		}
		if(c == '\n' || c == ' ' || c == '\t') {
			state = OUT;
		}else if(state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
} 
		
