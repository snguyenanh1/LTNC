#include <iostream>

using namespace std;

int main() {
	int a = 0, b = -1;
	do {
		cin >> a;
		if (a != b) {
			cout << a << " ";
		}
		b = a;
	} while (a != -1);
	return 0;
}
