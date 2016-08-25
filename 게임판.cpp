#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int H, W;
int board[25][25];
int block[4][3][2] =  { { { 0,0 },{ 1,0 },{ 0,1 } },
						{ { 0,0 },{ 0,1 },{ 1,1 } },
						{ { 0,0 },{ 1,0 },{ 1,1 } },
						{ { 0,0 },{ 1,0 },{ 1,-1 } } };


int push() {
	int x, y;
	int nx, ny;
	int re = 0;
	bool on = false;
	bool fit = false;


	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (board[i][j] == 0) {
				x = i;
				y = j;
				on = true;
				break;
			}
			if (on) break;
		}
	}

	if (!on) {
		return 1;
	}

	for (int type = 0; type  < 4; type++) {
		fit = true;
		for (int i = 0; i < 3; i++) {
			nx = x + block[type][i][0];
			ny = y + block[type][i][1];
			if (nx < 0 || ny < 0 || nx >= H || ny >= W) {
				fit = false;
			}
			else if ((board[nx][ny] += 1) > 1) {
				fit = false;
			}
		}
		if (fit) {
			re += push();
		}
		for (int i = 0; i < 3; i++) {
			nx = x + block[type][i][0];
			ny = y + block[type][i][1];
			if ( !(nx < 0 || ny < 0 || nx >= H || ny >= W )) {
				board[nx][ny] -= 1;
			}
		}
	}
	return re;
}


int main() {
	int roof;
	cin >> roof;
	for (int k = 0; k < roof; k++) {
		char temp;
		int result;
		cin >> H >> W;
		for (int i = 0; i < H; i++) {
			for (int j = 0; j < W; j++) {
				cin >> temp;
				if (temp == '.') {
					board[i][j] = 0;;
				}
				else {
					board[i][j] = 1;
				}
			}
		}

		cout << push() <<"\n";
	}

	return 0;
}