#include <stdio.h>

int main() {
	long bc, tc;
	int nc, c;
	bc = 0;  	
	tc = 0;
	nc = 0; 
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			nc++;
		}else if(c == ' ') {
			bc++;
		}else if(c == '\t') {
			tc++;
		}
	}
	printf("blank count:%ld\n", bc);	
	printf("tab count:%ld\n", tc);	
	printf("new line count:%d\n", nc);	
	return 0;
}
