#include <stdio.h>
#define ARR_LEN 10

void swap(int* a, int* b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
void cocktailSort(int* arr, int len) {
	int start = 0;
	int end = len - 1;

	while (start < end) {
		for (int i = start; i < end; i++) {
			if (arr[i] > arr[i + 1]) {
				swap(&arr[i], &arr[i + 1]);
			}
		}

		end--;

		for (int i = end; i > start; i--) {
			if (arr[i] < arr[i - 1]) {
				swap(&arr[i], &arr[i - 1]);
			}
		}

		start++;
	}
}

int main(void) {
	int arr[ARR_LEN] = { 5, 1, 8, 2, 9, 0, 4, 3, 7, 6 };

	printf("Before sorting : ");
	for (int i = 0; i < ARR_LEN; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	cocktailSort(arr, ARR_LEN);

	printf("After sorting : ");
	for (int i = 0; i < ARR_LEN; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}