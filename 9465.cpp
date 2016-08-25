#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	int roof;
	cin >> roof;
	for (int r = 0; r < roof; r++) {

		int size;
		int in;
		vector<int> input[2];
		cin >> size;
		input[0].push_back(0);
		input[0].push_back(0);
		input[1].push_back(0);
		input[1].push_back(0);
		for (int k = 0; k < 2; k++) {
			for (int i = 0; i < size; i++) {
				cin >> in;
				input[k].push_back(in);
			}
		}
		for (int i = 2; i < size + 2; i++) {
			for (int j = 0; j < 2; j++) {
				input[j][i] += max(max(input[j][i - 2], input[(j + 1) % 2][i - 2]), input[(j + 1) % 2][i - 1]);
			}
		}
		cout << max(input[0][size + 1], input[1][size + 1])<<"\n";
	}
	return 0;
}