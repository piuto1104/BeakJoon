#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int input;
	int arr[1010][10];
	for (int i = 0; i < 10; i++) {
		arr[0][i] = 1;
	}
	cin >> input;
	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < 10; j++) {
			arr[i][j] = 0;
		}
	}
	for (int i = 1; i < input; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = j; k < 10; k++) {
				arr[i][j] = arr[i][j] % 10007 + arr[i - 1][k] % 10007;
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum = (sum % 10007 + arr[input - 1][i] % 10007) % 10007;
	}

	cout << sum;
	return 0;
}