#include <stdio.h>

int main() {

	int myArr[10] = {3, 2, 19, 10, 12, 18, 7, 43, 65, 42};
	int n = 10;

	//for printing original array
	printf("Original Array: ");
	for(int i = 1; i < n; i++) {
		printf("%d ", myArr[i]);
	}

	//Bubble Sort
	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n-1-i; j++){
			if(myArr[j] > myArr[j+1]) {
				int temp = myArr[j];
				myArr[j] = myArr[j+1];
				myArr[j+1] = temp;
			}
		}
	}

	//for printing after swap array
	printf("\nAfter Swap Array: ");
	for(int i = 1; i < n; i++) {
		printf("%d ", myArr[i]);
	}
	
return 0;
}