#include <iostream>
#include <vector>
using namespace std;

int main() {

	int input;
	long long in;
	vector<long long> v;
	v.push_back(1);

	for (int i = 1; i <= 30; i++) {
		in = 0;
		for (int j = 0, k = i - 1; j < i; j++, k--) {
			in += v[j] * v[k];
		}
		v.push_back(in);
	}

	while(1) {
		
		cin >> input;
		if (input == 0) {
			break;
		}
		cout << v[input]<<"\n";
	}
	return 0;
}