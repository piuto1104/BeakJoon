#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int input;
	int arr[110][10];
	arr[0][0] = 0;
	for (int i = 1; i < 10; i++) {
		arr[0][i] = 1;
	}
	cin >> input;
	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 1; i < input; i++) {
		for (int j = 0; j + 1 <= 9; j++) {
			arr[i][j] = arr[i][j] % 1000000000 + arr[i - 1][j + 1] % 1000000000;
		}
		for (int j = 9; j - 1 >= 0; j--) {
			arr[i][j] = arr[i][j] % 1000000000 + arr[i - 1][j - 1] % 1000000000;
		}
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = (sum % 1000000000 + arr[input - 1][i] % 1000000000) % 1000000000;
	}

	cout << sum;
	return 0;
}