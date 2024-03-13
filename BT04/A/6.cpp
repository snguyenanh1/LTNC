#include <iostream>
#include <ctime>
using namespace std;

void bubbleSort(int arr[], int size);
void swap(int& x, int& y);
int main() {
	srand(time(NULL));
	int arr[30];
	for (int i = 0; i < 30; i++) {
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < 30; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	bubbleSort(arr, 30);
	for (int i = 0; i < 30; i++) {
		cout << arr[i] << " ";
	}
}
void bubbleSort(int arr[], int size) {
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void swap(int& x, int& y) {
	int tmp = x;
	x = y;
	y = tmp;
}