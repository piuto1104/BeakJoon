#include <iostream>
#include <vector>

using namespace std;

int main() {
	int input;
	long long in;
	vector<long long> v;
	cin >> input;
	input /= 2;
	v.push_back(1);
	v.push_back(1);
	for (int i = 2; i <= input; i++) {
		in = 0;
		for (int j = 0, k=i-1; j < i; j++,k--) {
			in += (v[j] * v[k]) % 987654321;
		}
		in =in % 987654321;
		v.push_back(in);
	}
	cout << v[input];

	return 0;
}