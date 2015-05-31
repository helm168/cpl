#include <stdio.h>

#define MAXLINE 1000 

int getline1(char s[], int lim);
void copy(char to[], char from[]);

int main() {
	int max, premax, hasmore;
	int len;
	char longest[MAXLINE];
	char temp[MAXLINE];
	char line[MAXLINE];

	max = premax = hasmore = 0;
	while((len = getline1(line, MAXLINE)) > 0) {
		if(line[len - 1] != '\n') {
			if(hasmore != 1) {
				copy(temp, line);
			}
			premax += len;
			if(max < premax) {
				max = premax;
			}
			hasmore = 1;
		} else {
			if(hasmore == 1) {
				if(max < premax + len) {
					max = premax + len;
					copy(longest, temp);
				}
			} else if(max < len) {
				max = len;
				copy(longest, line);
			}
			hasmore = 0;
			premax = 0;
		}
	}
	if(max > 0) {
		printf("len:%i\n", max);
		printf("str:%s\n", longest);
	}
	return 0;
}

int getline1(char s[], int lim) {
	char c;
	int i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if(c == '\n') {
		s[i] = c;
		i++;
	}
	if(c == EOF && i > 0) {
		s[i] = '\n';
		i++;
	}
	s[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0') {
		i++;
	}
}
