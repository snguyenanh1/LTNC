#include <iostream>

using namespace std;

int main() {
	int arr[10000];
	int N;
	cin >> N;
	bool isEqual = false;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		if (arr[tmp] == 0) arr[tmp]++;
		if (arr[tmp] != 0) isEqual = true;
		if (isEqual) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}