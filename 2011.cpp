#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string input;
int in;
vector<int> d;
vector<int> v[2];

int main() {
	cin >> input;

	for (int i = 0; i < (int)input.size(); i++) {
		d.push_back(input[i] - '0');
	}
	if (d[0] != 0) {
		v[0].push_back(1);
		v[1].push_back(0);
	}

	if (d[1] == 0) {
		v[0].push_back(0);
		if (d[0] * 10 + d[1] > 26) {
			v[1].push_back(0);
		}
		else {
			v[1].push_back(1);
		}
	}
	else {
		v[0].push_back(1);
		if (d[0] == 0) {
			v[1].push_back(0);
		}
		else if (d[0] * 10 + d[1] > 26) {
			v[1].push_back(0);
		}
		else {
			v[1].push_back(1);
		}
	}


	for (int i = 2; i < (int)input.size(); i++) {
		if (d[i] == 0) {
			v[0].push_back(0);
			if (d[i - 1] == 0) {
				v[0].push_back(0);
				v[1].push_back(0);
			}
			else if (d[i - 1] * 10 + d[i] > 26) {
				v[1].push_back(0);
			}
			else {
				in = (v[0][i - 2] % 1000000 + v[1][i - 2] % 1000000) % 1000000;
				v[1].push_back(in);
			}
		}
		else {
			in = (v[0][i - 1] % 1000000 + v[1][i - 1] % 1000000) % 1000000;
			v[0].push_back(in);
			if (d[i - 1] == 0 ) {
				v[1].push_back(0);
			}
			else if (d[i - 1] * 10 + d[i] > 26) {
				v[1].push_back(0);
			}
			else {
				in = (v[0][i - 2] % 1000000 + v[1][i - 2] % 1000000) % 1000000;
				v[1].push_back(in);
			}
		}
	}

	cout << (v[0][input.size() - 1] % 1000000 + v[1][input.size() - 1] % 1000000) % 1000000;

	return 0;
}