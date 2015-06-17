#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n);
int binsearch2(int x, int v[], int n);

int main() {
	int alen = 200000;
	int found_times = 50000000;
	int arr[alen];
	int i;
	int x = -1;
	clock_t time;
	int found;
	for(i = 0; i < alen; i++) {
		arr[alen] = i;
	}

	time = clock();
	for(i = 0; i < found_times; i++) {
		found = binsearch(x, arr, alen);
	}
	time = clock() - time;
	printf("binsearch cost %lu clock %lu seconds.\n", time, time/CLOCKS_PER_SEC);
	if(found = -1) {
		printf("binsearch not found.\n");
	} else {
		printf("binsearch found at %i.\n", found);
	}

	time = clock();
	for(i = 0; i < found_times; i++) {
		found = binsearch2(x, arr, alen);
	}
	time = clock() - time;
	printf("binsearch2 cost %lu clock %lu seconds.\n", time, time/CLOCKS_PER_SEC);
	if(found = -1) {
		printf("binsearch2 not found.\n");
	} else {
		printf("binsearch2 found at %i.\n", found);
	}
}

int binsearch(int x, int v[], int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	while(low <= high) {
		mid = (low + high) / 2;
		if(x < v[mid]) {
			high = mid - 1;
		} else if(x > v[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}

int binsearch2(int x, int v[], int n) {
	int low, high, mid;
	low = 0;
	high = n - 1;
	while(low <= high && v[mid] != x) {
		mid = (low + high) / 2;
		if(x < v[mid]) {
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	if(v[mid] == x) {
		return mid;
	} else {
		return -1;
	}				
}
