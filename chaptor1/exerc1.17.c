#include <stdio.h>

#define MAX_LINES_NUM 100
#define MAX_LINE_LEN 1000
#define LINE_LEN_THRESHOLD 80

int getline1(char s[], int lim);
void copy(char to[], char from[]);

int main() {
	int threshold_line_num, len;

	char lines[MAX_LINES_NUM][MAX_LINE_LEN];
	char line[MAX_LINE_LEN];

	threshold_line_num = 0;
	while((len = getline1(line, MAX_LINE_LEN)) > 0){
		if(len > LINE_LEN_THRESHOLD) {
			copy(lines[threshold_line_num], line);
			threshold_line_num++;	
		}
	} 
	if(threshold_line_num > 0) {
		int i = 0;
		for(i = 0; i < threshold_line_num; i++) {
			printf("line%i:%s", i+1, lines[i]);
		}
	}
	return 0;
}

int getline1(char s[], int lim) {
	int i;
	char c;
	for(i = 0; i < lim-1 && (c = getchar()) != '\n' && c != EOF; i++) {
		s[i] = c;
	}
	if(c == '\n') {
		s[i] = c;
		s++;
	}
	if(c == EOF && i > 0) {
		s[i] = '\n';
		s++;
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
