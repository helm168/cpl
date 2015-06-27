#include <stdio.h>
#define BUFSIZE 100

static char buf[BUFSIZE];
static int bufp = 0;

int getch(void) {
	return (bufp > 0) ? buf[--bufp] : getchar();
}

int ungetch(int c) {
	if(bufp >= BUFSIZE)
		printf("ungetch: too many charactors.\n");
	else 
		buf[bufp++] = c;
}
