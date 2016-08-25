#include <iostream>
#include <vector>
using namespace std;

int main() {
	int input;
	vector<long long> v;

	cin >> input;

	v.push_back(1);
	v.push_back(1);
	for (int i = 2; i < input; i++) {
		v.push_back(v[i - 2] + v[i - 1]);
	}

	cout << v[input-1];

	return 0;
}