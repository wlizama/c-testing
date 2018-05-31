#include <stdio.h>

int linearSearch(int array[], int lenArray, int numToSearch){

	for (int i = 0; i < lenArray; i++){
		if (array[i] == numToSearch){
			printf("%i encontrado en posicion[%i]\n", numToSearch, i);
			return 0;
		}
	}

	printf("%i No encontrado\n", numToSearch);
	return -1;
}

int main(){
	
	int myArr[] = {5,87,3,78,4,31,18,36,45,8,26,78};
	int lenArr = 12;
	int numS = 18;

	int numEncontrado = linearSearch(myArr, lenArr, numS);

	return 0;
}