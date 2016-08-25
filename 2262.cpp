#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int input;
int arr[260][260];
int sub[260][260];

void roof(int x, int y, int cnt) {
	int mi = 500000;
	int save, check;
	for (int i = 1, j = cnt; i <= cnt; i++, j--) {
		check = abs(arr[x + j][y] - arr[x][y - i])+ sub[x + j][y] + sub[x][y - i];

		if (check <= mi) {
			arr[x][y] = min(arr[x + j][y],arr[x][y - i]);
			sub[x][y] = check;
			mi = check;
		}

	}

}


int main() {
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> arr[i][i];
	}
	for (int i = 1; i < input; i++) {
		for (int j = i, k = 0; j < input; j++, k++) {
			roof(k, j, i);
		}
	}

	cout << sub[0][input-1];

	return 0;
}