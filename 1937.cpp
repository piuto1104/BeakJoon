#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct wang {
	int x, y, val;
} w;
bool compare(const w &a, const w &b) {
	if (a.val < b.val)
		return true;
	return false;
}
int x[4] = { 0,0,1,-1 };
int y[4] = { 1,-1,0,0 };

int n, large;
int arr[501][501];
int len[501][501];
w in;
vector<w> input;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			in.x = i;
			in.y = j;
			in.val = arr[i][j];
			input.push_back(in);
		}
	}
	sort(&input[0], &input[n*n], compare);

	for (int i = 0; i < n*n; i++) {
		for (int roof = 0; roof < 4; roof++) {
			int nx = input[i].x + x[roof];
			int ny = input[i].y + y[roof];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
				continue;
			}
			if (arr[input[i].x][input[i].y] < arr[nx][ny]) {
				if (len[input[i].x][input[i].y] == 0) {
					len[input[i].x][input[i].y]++;
				}
				if (len[nx][ny] < len[input[i].x][input[i].y] + 1)
					len[nx][ny] = len[input[i].x][input[i].y] + 1;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (len[i][j] > large) {
				large = len[i][j];
			}
		}
	}

	if (large == 0) {
		cout << 1;
	}
	else {
		cout << large;
	}
	return 0;
}