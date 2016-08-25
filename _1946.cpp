#include <iostream>
#include <queue>
#include <functional>
using namespace std;

typedef struct info {
	int first;
	int second;
	info(int f, int s) : first(f), second(s) {
	}
}info;

int t, n;
int _f, _s;
priority_queue<info> q;
int check,cnt;

bool operator<(const info &a, const info &b) {
	return a.first > b.first;
}

int main() {
	cin >> t;
	for (int T = 0; T < t; T++) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> _f >> _s;
			q.push(info(_f, _s));
		}
		check = q.top().second;
		cnt = 1;
		while (!q.empty()) {
			if (check > q.top().second) {
				cnt++;
				check = q.top().second;
			}
			q.pop();
		}
		cout << cnt << "\n";
	}


	return 0;
}