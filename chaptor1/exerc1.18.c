#include <stdio.h>
#include "getline1.h"

#define MAX_LINE_NUM 1000

int trimright(char s[], int len);
void printline(char s[], int len);

int main() {
	int len;
	char line[MAX_LINE_NUM];

	while((len = getline1(line, MAX_LINE_NUM)) > 0) {
		printf("input line:");
		printline(line, len);
		int lenaftertrim = trimright(line, len);
		if(lenaftertrim == 0) {
			printf("blank line.\n");
		} else {
			printf("output line:");
			printline(line, lenaftertrim);
		}
	}
	return 0;
}

//return length of line after trim;
int trimright(char s[], int len) {
	int i;
	for(i = len - 1; i >= 0; i--) {
		if(i == len - 1 && s[i] == '\n') {
			continue;
		} 
		if(s[i] == ' ' || s[i] == '\t') {
			s[i] = '\0';
		} else {
			break;
		}
	}
	if(s[0] == '\0' || s[0] == '\n') {
		return 0;
	} else {
		return i + 1;
	} 
}

void printline(char s[], int len) {
	int i;
	printf("\"");
	for(i = 0; i < len; i++) {
		if(i == len - 1 && s[i] == '\n') {
			printf("\\n");
		} else {
			printf("%c", s[i]);
		} 
	}
	printf("\"\n");
} 
