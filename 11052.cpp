#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int size;
	int in;
	int large;
	vector<int> input;
	vector<int> field;

	cin >> size;

	input.push_back(0);
	for (int i = 0; i < size; i++) {
		cin >> in;
		input.push_back(in);
	}
	field.push_back(0);
	for (int i = 1; i <= size; i++) {
		large = input[i];
		for (int j = i-1,k=1; j >= 1; j--,k++) {
			if (large < field[j] + input[k])
				large = field[j] + input[k];
		}
		field.push_back(large);
	}
	cout << field[size];

	return 0;
}
