#include <stdio.h>

void swap(int* a, int* b);
void insertion_sort(int* arr, int length);

int main(void) {

	int arr[10] = { 5, 1, 6, 9, 2, 3, 8, 0, 4, 7 };

	insertion_sort(arr, 10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

void swap(int* a, int* b) {
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void insertion_sort(int* arr, int length) {
	int temp;

	for (int i = 0; i < length; i++) {
		temp = arr[i];

		for (int j = i - 1; j >= 0; j--) {
			if (temp < arr[j]) {
				arr[j + 1] = arr[j];
			}
			else {
				arr[j] = temp;
			}
		}
	}
}