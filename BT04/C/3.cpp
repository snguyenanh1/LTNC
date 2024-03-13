#include <iostream>

using namespace std;
bool isPalindrome(int n);

int main() {
	int t, a ,b;
	cin >> t;
	while (t > 0) {
		int count = 0;
		cin >> a >> b;
		while (a <= b) {
			if (isPalindrome(a)) count++;
			a++;
		}
		cout << count << endl;
		t--;
	}
}

bool isPalindrome(int n) {
	if (n < 0) return false;
	int tmp = n;
	int f = 0;
	while (n > 0) {
		int d = n % 10;
		f = 10 * f + d;
		n /= 10;
	}
	return tmp == f;
}