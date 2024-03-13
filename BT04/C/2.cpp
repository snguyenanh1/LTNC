#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char c[], int size) {
	for (int i = 0; i < size / 2; i++) {
		if (c[i] != c[size - i - 1]) return false;
	}
	return true;
}


int main() {
	char c[100];
	cin >> c;
	int size = strlen(c);
	bool p = isPalindrome(c, size);
	if (p) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}