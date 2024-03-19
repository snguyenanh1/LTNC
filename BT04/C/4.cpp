#include <iostream>
#include <cstring>
using namespace std;

bool isMine(const char c, int x, int y, int m, int n) {
	return x >= 0 && y >= 0 && x < m && y < n && c == '*';
}

int countMines(const char board[][10], int m, int n, int x, int y) {
	int count = 0;
	for (int dx = -1; dx <= 1; dx++) {
		for (int dy = -1; dy <= 1; dy++) {
			if (dx == 0 && dy == 0) continue;
			int nx = x + dx, ny = y + dy;
			if (isMine(board[nx][ny], x, y, m , n)) count++;
		}
	}
	return count++;
}

void minesweeper(char result[][10], const char board[][10], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (isMine(board[i][j], i, j, m, n)) result[i][j] = '*';
			else result[i][j] = '0' + countMines(board, m, n, i, j);
		}
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	
	char result[10][10];
	char board[10][10];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}
	
	minesweeper(result, board, m, n);
	cout << endl;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

}