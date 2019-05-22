#include <stdio.h>

void swap(int* a, int* b);
void insertion_sort(int* arr, int length);

int main(void) {

	int arr[10] = { 5, 7, 6, 9, 1, 2, 3, 0, 8, 4 };

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
	int temp = 0;
	int j = 0;

	for (int i = 1; i < length; i++) {
		temp = arr[i];

		for (j = i - 1; j >= 0; j--) {
			if (temp < arr[j]) {
				arr[j + 1] = arr[j];
			}
			else {
				arr[j + 1] = temp;
				break;
			}
		}

		if (j < 0) {
			arr[0] = temp;
		}
	}
}