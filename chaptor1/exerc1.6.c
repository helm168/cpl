#include <stdio.h>

int main() {
	int c;
	while(1) {
		c = getchar() != EOF;
		printf("%d\n", c);
		if(c == 0) {
			break;
		}
	}
	return 0;
}
