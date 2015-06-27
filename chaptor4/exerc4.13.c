#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100
 
void reverse(char []);
void reversepart(char [], int start, int end);

int main(int argc, char **argv) {
	char s[MAXSIZE];

	if(argc != 2) {
		printf("Usage: %s <string>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	strcpy(s, argv[1]);
	reverse(s);
	printf("reverse:%s\n", s);
}

void reverse(char s[]) {
	int len = strlen(s);
	reversepart(s, 0, len-1);
}

void reversepart(char s[], int start, int end) {
	char c;
	if(end > start) {
		c = s[start];
		s[start] = s[end];
		s[end] = c;
		reversepart(s, start+1, end-1);
	}
}
