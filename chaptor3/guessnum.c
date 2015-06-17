#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

static int guess_times;
static int max_num;
void print_result();

int main() {
	guess_times = 0;
	max_num = 10;
	srand(time(NULL));
	int num = rand() % max_num+1;	 
	int user_guess;
	int first_guess = 1;
	do {
		if(first_guess) {
			printf("print a number between 0 - %u:", max_num);
			first_guess = 0;
		} else {
			printf("\n");
			if(user_guess == num) {
				printf("gueess");
				print_result();
			} else {
				printf("your guess is %s than the number, again:", user_guess < num ? "smaller":"bigger"); 
			}
		}
		scanf("%u", &user_guess);
		guess_times++;
	}
	while(user_guess != num);
}

void print_result() {
	printf("asdf%i\n", max_num);
	int expect_times = ceil(log(max_num) / log(2));
	printf("expect_times:%u, %u", expect_times, guess_times);	
	if(guess_times > expect_times) {
		printf("your guess times is %u, you are a pig.\n", guess_times);	} else {
		printf("your guess times is %u, you are a genius.\n", guess_times); 
	}
}
