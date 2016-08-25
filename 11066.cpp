#include <iostream>
#include <algorithm>

using namespace std;

int input;
int arr[501][501];
int sub[501][501];

void arr_check(int x, int y, int cnt) {
	int mi = 50000000;
	int check, _i, _j;

	arr[x][y] = arr[x - cnt][y] + arr[x][y + 1];
	for (int i = 1, j = cnt; i <= cnt; i++, j--) {
		check = sub[x - j][y] + sub[x][y + i];
		if (check <= mi) {
			sub[x][y] = check;
			mi = check;
		}
	}
	sub[x][y] += arr[x][y];
}


int main() {
	int roof;
	cin >> roof;
	for (int r = 0; r < roof; r++) {

		cin >> input;
		for (int i = 0; i < input; i++) {
			cin >> arr[i][i];
		}
		for (int i = 1; i < input; i++) {
			for (int j = i, k = 0; j < input; j++, k++) {
				arr_check(j, k, i);
			}
		}
		cout << sub[input - 1][0]<<"\n";

	}




	return 0;
}