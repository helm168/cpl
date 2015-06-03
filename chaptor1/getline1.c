#include <stdio.h>

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

