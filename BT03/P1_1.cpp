#include <iostream>
using namespace std;

struct Point {
	int x, y;

	void print() {
		cout << x << " " << y;
	}
};

int main() {
	Point point;
	point.x = 10;
	point.y = 12;
	point.print();

}