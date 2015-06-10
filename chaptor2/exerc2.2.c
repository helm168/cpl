#include <stdio.h>

int main() {
	int lim = 1000;
	int i = 0;
	char c;
	char line[lim];
	while(i < lim - 1) {
		if((c = getchar()) == '\n') {
			break;
		} else if(c == EOF) {
			break;
		}
		line[i] = c;
		i++;
	}
	if(c == '\n') {
		line[i] = c;
		i++;
	} 
	line[i] = '\0';
	if(i > 0) {
		printf("line:%s", line);
	}
	return 0;
}
