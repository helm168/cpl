#include <stdio.h>

int getline1(char line[]);
void copy(char to[], char from[]);

int main() {
	int maxlen, len;
	maxlen = 0;
	char *longestline;
	char *line;
	while((len = getline1(line)) > 0) {
		if(len > maxlen) {
			maxlen = len;
			copy(longestline, line);
		}
	}
	if(maxlen > 0) 
		printf("%s", longestline);
	return 0;
}

int getline1(char line[]) {
	int len, c;
	len = 0;
	while((c = getchar()) != EOF && c != '\n') 
		line[len++] = c;	
	if(c == '\n') 
		line[len++] = c;
	return len;
}

void copy(char to[], char from[]) {
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0')
		i++;
}

