#include <iostream>
#include <algorithm>

using namespace std;

int arr[1005][1005];
int x[2] = { -1, 0 };
int y[2] = { 0, -1 };

int main() {
	int N, M;
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
			arr[i][j] += max(arr[i + x[0]][j + y[0]], arr[i + x[1]][j + y[1]]);
		}
	}
	cout << arr[N][M];


	return 0;
}