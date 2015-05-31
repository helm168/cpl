#include <stdio.h>

#define MAXLINE 1000

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline1(line, MAXLINE)) > 0) {
		if(len > max) {
			max = len;
			copy(longest, line);
		}
	}

	if(max > 0) {
		printf("%s", longest);
	}
	return 0;
}

int getline1(char line[], int maxlen) {
	char c;
	int i;
	for(i = 0; i < maxlen - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		line[i] = c;
	}
	if(c == '\n') {
		line[i] = c;
		i++;
	}
	if(c == EOF && i > 0) {
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;  
}
