#include <stdio.h>

#define MAXWORDLEN 11

int main() {
	int arr_of_len[MAXWORDLEN];
	int word_len, len_of_word_len;
	int i, j, c;
	int max_len;
	word_len = 0;
	for(i = 0; i < MAXWORDLEN; i++) {
		arr_of_len[i] = 0;
	} 
	while((c = getchar()) != EOF) {
		if(c == ' ' || c == '\n' || c == '\t') {
			if(word_len > 0) {
				if(word_len <= 10) {
					 arr_of_len[word_len - 1]++;
				}else {
					arr_of_len[10]++;
				}
			}
			word_len = 0;
		} else {
			word_len++;
		}
	}
	
	max_len = 0;
	for(i = 0; i < MAXWORDLEN; i++) {
		len_of_word_len = arr_of_len[i];
		if(len_of_word_len > max_len) {
			max_len = len_of_word_len;
		}
	}
	while(max_len) {
		printf("%3d|", max_len);
		for(i = 0; i < MAXWORDLEN; i++) {
			len_of_word_len = arr_of_len[i];
			if(len_of_word_len >= max_len) {
				printf("  *");
			} else {
				printf("   ");
			}
		}
		printf("\n");
		max_len--;
	}
	printf("    ");
	for(i = 0; i < MAXWORDLEN; i++) {
		printf("___");
	}
	printf("\n");
	printf("    ");
	for(i = 0; i < MAXWORDLEN; i++) {
		if(i == MAXWORDLEN - 1) {
			printf(">10"); 
		} else {
			printf("%3d", i + 1);
		}
	}
	printf("\n");
	
}
