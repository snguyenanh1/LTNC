#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n;
	cin >> n;
	long long a = INT_MAX, b = INT_MAX;
	long long x, y;
	while (cin >> x >> y) {
		a = min(x, a);
		b = min(y, b);
	}
	cout << a * b << endl;
}