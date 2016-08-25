#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int input, *N;
	cin >> input;
	N = new int[input];
	for (int i = 0; i < input; i++) {
		cin >> N[i];
	}
	sort(N, N + input);
	for (int i = 0; i < input; ++i) {
		cout << N[i] << "\n";
	}

	return 0;
}