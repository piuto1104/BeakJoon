#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n, in, sum, cnt;
priority_queue<int> q;


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		q.push(in);
	}
	while (!q.empty()) {
		if (cnt == 2) {
			q.pop();
			cnt = 0;
		}
		else {
			sum += q.top();
			q.pop();
			cnt++;
		}
	}

	cout << sum;

	return 0;
}