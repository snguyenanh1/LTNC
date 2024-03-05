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
	cout << ship.id << " " << ship.detail.x << " " << ship.detail.y;
}