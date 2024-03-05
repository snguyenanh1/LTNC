#include <iostream>
#include <string>
using namespace std;

struct Point {
	int x, y;
};

struct Rect {
	float x, y, w, h;

	bool contain(const Point& p) {
		if (p.x >= this->x && p.x <= this->x + this->h) {
			if (p.y >= this->y && p.y <= this->y + this->w) {
				return true;
			}
		}
		return false;
	}

};

struct Ship {
	Rect detail;
	string id;
	float dx, dy;

	void move() {
		detail.x += dx;
		detail.y += dy;
	}

};

void display(const Ship& ship) {
	cout << ship.id << " " << ship.detail.x << " " << ship.detail.y << endl;
}

int main() {
	Ship ship1, ship2;
	ship1.detail.x = 10, ship1.detail.y = 8; ship1.dx = 2; ship1.dy = -1,25, ship1.id = "007";
	ship2.detail.x = -2; ship2.detail.y = 11; ship2.dx = 1; ship2.dy = 0.5, ship2.id = "008";
	for (int i = 0; i < 10; i++) {
		ship1.move();
		ship2.move();
	}
	display(ship1);
	display(ship2);
}