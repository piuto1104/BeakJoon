#include <iostream>
#include <algorithm>

using namespace std;

typedef struct wang {
	int x, y;
}w;

int input;
w arr[100001];



bool comp(const w &a, const w &b) {
	if (a.y <b.y)
		return true;
	else if (a.y == b.y) {
		if (a.x < b.x)
			return true;
	}
	return false;
}


int main() {
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> arr[i].x >> arr[i].y;
	}

	sort(arr, arr + input, comp);

	for (int i = 0; i < input; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}


	return 0;
}