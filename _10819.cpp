#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

#define INF -999999999

int n, in, result;
vector<int> v;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		v.push_back(in);
	}
	sort(v.begin(), v.end());
	result = INF;
	do {
		int temp = 0;
		for (int i = 0; i < n-1; i++) {
			temp += abs(v[i] - v[i+1]);
		}
		result = max(result, temp);
	} while (next_permutation(v.begin(), v.end()));
	cout << result;
	return 0;
}
