#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef struct w {
	int a[3];
}w;

int main() {
	int input;
	int arr[1000][3];
	cin >> input;

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i < input; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] += min(arr[i - 1][(j + 1) % 3], arr[i - 1][(j + 2) % 3]);
		}
	}
	int min = arr[input - 1][0];
	for (int i = 0; i < 3; i++) {
		if (min > arr[input - 1][i]) {
			min = arr[input - 1][i];
		}
	}
	cout << min;
	return 0;
}


