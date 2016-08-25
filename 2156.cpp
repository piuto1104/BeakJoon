#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct wang {
	int a[3];
}w;

int main() {
	int size;
	int inp;
	w in;
	vector<int> input;
	vector<w> v;
	cin >> size;

	for (int i = 0; i < size; i++) {
		cin >> inp;
		input.push_back(inp);
	}
	
	in.a[0] = 0;
	in.a[1] = input[0];
	in.a[2] = input[0];
	v.push_back(in);

	for (int i = 1; i < size; i++) {
		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				in.a[j] = max(max(v[i - 1].a[0], v[i - 1].a[1]), v[i - 1].a[2]);
			}
			else {
				in.a[j] = v[i - 1].a[j - 1] + input[i];
			}
		}
		v.push_back(in);
	}
	cout << max(max(v[size-1].a[0], v[size - 1].a[1]), v[size - 1].a[2]);

	return 0;
}