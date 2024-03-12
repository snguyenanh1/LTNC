#include <iostream>
using namespace std;

int arr1[3];
int arr2[4] = {1, 2, 3 ,4};
//int arr3[3] = { 1, 2, 3 ,4 }; - too many initializer values
int arr4[5] = {1, 2 ,3, 4};
int arr9[] = { 1 ,2 ,3 ,4 };

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
	

int main() {
	int arr5[3];
	int arr6[4] = { 1, 2, 3, 4 };
	//int arr7[3] = { 1, 2 ,3 ,4 }; - too many initializer values
	int arr8[5] = { 1, 2 ,3 ,4 };
	int arr10[] = { 1, 2, 3 ,4 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int size4 = sizeof(arr4) / sizeof(arr4[0]);
	int size5 = sizeof(arr5) / sizeof(arr5[0]);
	int size6 = sizeof(arr6) / sizeof(arr6[0]);
	int size8 = sizeof(arr8) / sizeof(arr8[0]);
	int size9 = sizeof(arr9) / sizeof(arr9[0]);
	int size10 = sizeof(arr10) / sizeof(arr10[0]);
	printArray(arr1, size1);
	printArray(arr2, size2);
	printArray(arr4, size4);
	printArray(arr5, size5);
	printArray(arr6, size6);
	printArray(arr8, size8);
	printArray(arr9, size9);
	printArray(arr10, size10);
	return 0;
}