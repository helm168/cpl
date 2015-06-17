#include <stdio.h>

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

int main(int argc, char *argv[]) {
	if(argc != 2) return;
	int len = 10;
	int arr[len];
	int i;
	for(i = 0; i < len; i++) {
		arr[i] = 2 * i;
	}
	int si = atoi(argv[1]);
	int idx = binsearch(si, arr, len);
	if(idx != -1) {
		printf("found at index: %i\n", idx);
	} else {
		printf("not found\n");
	}

}
