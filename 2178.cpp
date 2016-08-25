#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef struct wang {
	int x, y;
	int time;
}w;

int px[4] = { 0,0,1,-1 };
int py[4] = { -1,1,0,0 };

int N, K;
char inp;
int arr[105][105];
int re = 999999;
w in;
queue<w> q;

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			cin >> inp;
			if (inp == '1') {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = 0;
			}
		}
	}
	in.x = in.y = 0;
	in.time = 1;
	q.push(in);

	while (!q.empty()) {
		for (int i = 0; i < 4; i++) {
			int nx = q.front().x + px[i];
			int ny = q.front().y + py[i];
			if (nx < 0 || ny < 0 || nx >= N || ny >= K) {
				continue;
			}
			else if (arr[nx][ny] == 0) {
				continue;
			}
			else {
				if (nx == N - 1 && ny == K - 1) {
					re = min(re, q.front().time + 1);
				}
				else {
					in.x = nx;
					in.y = ny;
					in.time = q.front().time + 1;
					q.push(in);
					arr[nx][ny] = 0;
				}
			}
		}
		q.pop();
	}

	cout << re;


	return 0;
}