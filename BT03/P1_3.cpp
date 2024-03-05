#include <iostream>
using namespace std;

struct Point {
	int x, y;
};


void print(Point& p) {
	cout << p.x << " " << p.y;
}

Point mid_point(const Point& p1, const Point& p2) {
	Point point;
	point.x = (p1.x + p2.x) / 2;
	point.y = (p2.y + p1.y) / 2;
	return point;
}


int main() {
	Point point;
	point.x = 10;
	point.y = 12;
	print(point);
	Point point2;
	point2.x = 8;
	point2.y = 6;
	Point mid = mid_point(point, point2);
	print(mid);
}