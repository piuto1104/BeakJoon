#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct info {
	long long p;
	long long s;
	info(long long p, long long s) : p(p), s(s) {
	}
}info;

long long n, b, _p, _s;
vector<info> v;
vector<info> save;
long long large, have, cost, result;

bool cmp(const info &a, const info &b) {
	return (a.p + a.s) < (b.p + b.s);
}


int main() {
	cin >> n >> b;

	for (int i = 0; i < n; i++) {
		cin >> _p >> _s;
		v.push_back(info(_p, _s));
	}
	save = v;
	for (int i = 0; i < n; i++) {
		have = b;
		result = 0;
		v[i].p /= 2;
		sort(v.begin(), v.end(), cmp);
		for (int j = 0; j < n; j++) {
			cost = v[j].p + v[j].s;
			if (have - cost > 0) {
				have -= cost;
				result++;
			}
			else {
				break;
			}
		}
		large = max(large, result);
		v = save;
	}
	cout << large;



	return 0;
}