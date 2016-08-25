#include <iostream>
#include <queue>

using namespace std;

typedef struct info {
	int e, w;
	info(int e, int w) : e(e), w(w) {
	}
}info;

int n, m, s;
int u, v, w;
vector<int> arr;
vector<bool> flag;
info in;
vector<info> g[20001];

priority_queue<info> q;

bool operator<(const info &a, const info &b) {
	return a.w > b.w;
}

int main() {
	cin >> n >> m;
	cin >> s;
	arr.assign(n + 2, -1);
	flag.assign(n + 2, false);
	for (int i = 0; i < m; i++) {
		cin >> u >> v >> w;
		g[u].push_back(info(v,w));
	}
	in.e = s;
	in.w = 0;
	q.push(in);
	while (!q.empty()) {
		info temp = q.top();
		q.pop();
		if (flag[temp.e]) {
			continue;
		}
		else {
			flag[temp.e] = true;
			arr[temp.e] = temp.w;
		}
		int size = (int)g[temp.e].size();
		for (int i = 0; i < size; i++) {
			q.push(info(g[temp.e][i].e, g[temp.e][i].w + temp.w));
		}
	}
	for (int i = 1; i <= n; i++) {
		if (arr[i] == -1) {
			cout << "INF" << "\n";
		}
		else {
			cout << arr[i] << "\n";
		}
	}
	return 0;
}