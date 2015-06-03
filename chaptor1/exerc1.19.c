#include <stdio.h>
#include "getline1.h"
#include "string1.h"

#define MAX_LINE_NUM 1000

int main() {
	int len;
	char line[MAX_LINE_NUM];

	while((len = getline1(line, MAX_LINE_NUM)) > 0) {
		if(line[len - 1] == '\n') {
			line[len - 1] = '\0';
		}
		reverse1(line);
		printf("reverse output:%s\n", line);
	}
}
