#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int MAX_N = 500;
void bubbleSort(int arr[], int size) {
	bool swapped;
	for (int i = 0; i < size - 1; i++) {
		swapped = false;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j+1]);
				swapped = true;
			}
		}
		if (!swapped) break;
	}
	return;
}

int main() {
	int arr[MAX_N] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];
	bubbleSort(arr, n);
	int time = 0;
	for (int i = 0; i < n; i++) {
		time += arr[i] * (n - i - 1);
	}
	cout << time;
}