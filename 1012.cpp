#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

typedef struct wang {
	int x;
	int y;
}w;

int x[4] = { 0,0,1,-1 };
int y[4] = { -1,1,0,0 };
int field[55][55];
int M, N, K;
int check;
w in;
queue<w> Q;

int main() {

	int roof;
	cin >> roof;
	for (int r = 0; r < roof; r++) {
		cin >> M >> N >> K;
		check = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				field[i][j] = 0;
			}
		}

		for (int i = 0; i < K; i++) {
			cin >> in.x >> in.y;
			field[in.y][in.x] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (field[i][j] == 1) {
					check++;
					in.x = i;
					in.y = j;
					field[in.x][in.y] = 0;
					Q.push(in);
				}
				while (!Q.empty()) {
					for (int k = 0; k < 4; k++) {
						if (Q.front().x + x[k] < 0 || Q.front().y + y[k] < 0 || Q.front().x + x[k] > N || Q.front().y + y[k] > M) {
							continue;
						}
						else if (field[Q.front().x + x[k]][Q.front().y + y[k]] == 1) {
							in.x = Q.front().x + x[k];
							in.y = Q.front().y + y[k];
							field[in.x][in.y] = 0;
							Q.push(in);
						}
					}
					Q.pop();
				}
			}
		}

		cout << check << "\n";
	}

	return 0;
}