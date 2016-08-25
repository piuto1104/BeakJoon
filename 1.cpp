#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef struct info {
	int x, y;
	int num;
	info(int x, int y) : x(x), y(y) {
	}
}info;

int n, w, _x ,_y;
vector<info> v;
bool comp(const info &a, const info &b) {
	if (a.x <b.x)
		return true;
	else if (a.x == b.x) {
		if (a.y < b.y)
			return true;
	}
	return false;
}

int main() {
	cin >> n >> w;
	for (int i = 0; i < w; i++) {
		cin >> _x >> _y;
		v.push_back(info(_x, _y));
	}
	sort(v.begin(), v.end(), comp);

	cout << "1";


	return 0;
}