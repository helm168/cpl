#include <stdio.h>

int main() {
	int startPrint;
	int endPrint;
	startPrint= endPrint = 0;
	int c;
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			startPrint = 0;
			endPrint = 0;
			putchar(c);
			continue;
		}
		if(!endPrint) {
			if(!startPrint) {
				if(c != '\t' && c != ' ') {
					startPrint = 1;
					putchar(c);
				}
			} else {
				if(c == '\t' || c == ' ') {
					endPrint = 1;
				}else {
					putchar(c);
				}
			}
		}
	}
	return 0;
}
