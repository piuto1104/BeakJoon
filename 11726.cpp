#include <iostream>

using namespace std;

int main() {
	int arr[1005];
	int input;

	cin >> input;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= input; i++) {
		arr[i] = (arr[i - 1] % 10007 + arr[i-2] % 10007) % 10007;
	}
	cout << arr[input];

	return 0;
}