#include <stdio.h>

int binarySearch(int array[], int n, int x) {
	int min, max, p;
	min = 0;
	max = n;

	while(max >= min){
		p = (max + min) / 2;

		if(array[p] == x)
			return p;
		else if(array[p] < x)
			min = p + 1;
		else
			max = p - 1;
	}

	return -1;
}

void printArray(int arr[], int len){
	for (int i = 0; i < len; ++i){
		printf("%i ", arr[i]);
	}
}

int main() {
	int pos;
	int array[] = {11, 22, 36, 47, 51, 62, 79, 85, 93, 100};
	int lenArray = 10;

	printf("Array: ");
	printArray(array, lenArray);

	int n = sizeof(array) / sizeof(array[0]);
	int num = 79;
	pos = binarySearch(array, n, num);

	printf("\nnúmero %i encontrado en posicion[%i]\n", num, pos);

	return 0;
}
