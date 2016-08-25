#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct wang {
	int x, y, val;
} w;
bool compare(const w &a, const w &b) {
	if (a.val > b.val)
		return true;
	return false;
}
int x[4] = { 0,0,1,-1 };
int y[4] = { 1,-1,0,0 };

int m, n, large;
int arr[501][501];
int len[501][501];
w in;
vector<w> input;

int main() {
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			in.x = i;
			in.y = j;
			in.val = arr[i][j];
			input.push_back(in);
		}
	}
	sort(&input[0], &input[m*n], compare);
	len[0][0] = 1;

	for (int i = 0; i < m*n; i++) {
		for (int roof = 0; roof < 4; roof++) {
			int nx = input[i].x + x[roof];
			int ny = input[i].y + y[roof];
			if (nx < 0 || ny < 0 || nx >= m || ny >= n) {
				continue;
			}
			if (arr[input[i].x][input[i].y] > arr[nx][ny]) {
				len[nx][ny] += len[input[i].x][input[i].y];
			}
		}
	}


	cout << len[m - 1][n - 1];

	return 0;
}