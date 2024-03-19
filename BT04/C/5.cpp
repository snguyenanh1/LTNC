#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

const int MAX_N = 20;

int main() {
	int arr[MAX_N][MAX_N] = {};
	int rows, cols;
	cin >> rows >> cols;

	int startRow = 0, endRow = rows - 1;
	int startCol = 0, endCol = cols - 1;
	int value = 1;

	while (startRow <= endRow && startCol <= endCol) {
		for (int col = startCol; col <= endCol; col++) {
			arr[startRow][col] = value;
			value++;
		}
		startRow++;
		for (int row = startRow; row <= endRow; row++) {
			arr[row][endCol] = value;
			value++;
		}
		endCol--;
		
		if (startRow <= endRow) {
			for (int col = endCol; col >= startCol; col--) {
				arr[endRow][col] = value;
				value++;
			}
			endRow--;
		}

		if (startCol <= endCol) {
			for (int row = endRow; row >= startRow; row--) {
				arr[row][startCol] = value;
				value++;
			}
			startCol++;
		}
	}

	cout << endl;

	for (int i = 0; i < rows; i++) {
		for(int j = 0; j < cols; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;

	}
	


}