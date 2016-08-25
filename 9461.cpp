#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	long long roof, large;
	long long in;
	vector<long long> input;
	vector<long long> field;


	cin >> roof;
	large = 0;
	for (long long i = 0; i < roof; i++) {
		cin >> in;
		input.push_back(in);
		large = max(in, large);
	}
	field.push_back(1);
	field.push_back(1);
	field.push_back(1);
	field.push_back(2);
	field.push_back(2);

	for (long long i = 5; i <= large; i++) {
		in = field[i - 5] + field[i - 1];
		field.push_back(in);
	}

	for (long long i = 0; i < roof; i++) {
		cout << field[input[i] - 1]<<"\n";
	}
	return 0;
}