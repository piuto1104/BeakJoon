#include <iostream>
#include <vector>

using namespace std;

typedef struct wang {
	int zero;
	int one;
}w;

int main() {
	int roof;
	cin >> roof;
	for (int r = 0; r < roof; r++) {

		int input;
		w in;
		vector<w> v;

		cin >> input;

		in.zero = 1;
		in.one = 0;
		v.push_back(in);

		in.zero = 0;
		in.one = 1;
		v.push_back(in);
		for (int i = 2; i <= input; i++) {
			in.zero = v[i - 2].zero + v[i - 1].zero;
			in.one = v[i - 2].one + v[i - 1].one;
			v.push_back(in);
		}

		cout << v[input].zero << " " << v[input].one << "\n";
	}


	return 0;
}