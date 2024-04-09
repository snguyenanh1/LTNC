#include <iostream>
using namespace std;

int binarySearch(int* arr, int start, int end, int n) {
	if (end >= start) {
		int mid = start + (end - start) / 2; 
		if (*(arr + mid) > n) return binarySearch(arr, start, mid - 1, n);
		if (*(arr + mid) < n) return binarySearch(arr, mid + 1, end, n);
		if (*(arr + mid) == n) return mid;
	}
	return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7 , 8, 9, 10};
	cout << binarySearch(arr, 0, 9, 4) << endl;
}
