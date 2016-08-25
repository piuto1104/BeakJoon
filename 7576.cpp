#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
typedef struct wang {
	int x;
	int y;
}w;

int N, M, temp, date;
int box[1001][1001];
w in;
queue<w> Q;
int x[4] = { 0,0,1,-1 };
int y[4] = { -1,1,0,0 };


int main(){
	cin >> M >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> temp;
			if (temp == -1) {
				box[i][j] = -1;
			}
			else if(temp == 0) {
				box[i][j] = 0;
			}
			else {
				box[i][j] = 1;
				in.x = i;
				in.y = j;
				Q.push(in);
			}
		}
	}

	while (!Q.empty()) {
		for (int i = 0; i < 4; i++) {
			if (Q.front().x + x[i] < 0 || Q.front().y + y[i] < 0 || Q.front().x + x[i] >= N || Q.front().y + y[i] >= M) {
				continue;
			}
			else if (box[Q.front().x + x[i]][Q.front().y + y[i]] == 0) {
				box[Q.front().x + x[i]][Q.front().y + y[i]] = box[Q.front().x][Q.front().y] + 1;
				in.x = Q.front().x + x[i];
				in.y = Q.front().y + y[i];
				Q.push(in);
			}
		}
		Q.pop();
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (box[i][j] == 0) {
				cout << -1;
				return 0;
			}
			if (box[i][j] > date) {
				date = box[i][j];
			}
		}
	}
	cout << date-1;
	return 0;
}
