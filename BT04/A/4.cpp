#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char c[5];
	cin >> c[-1]; // debug error : stack around...
	cin >> c[5]; // debug error: stack around..
	cin >> c[6]; // debug error: stack...
	cout << c[-1] << endl;
	cout << c[5] << endl;
	cout << c[6] << endl;

	char d[3][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; i++) {
			cin >> d[j][i];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << d[i][j];
		}
	}

	
}