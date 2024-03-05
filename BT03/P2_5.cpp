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