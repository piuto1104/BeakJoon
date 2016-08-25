#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>

using namespace std;

int n, m, start, x, y;
bool check[1001];
queue<int> q;
stack<int> st;
vector<int> v[1001];
vector<int> sub;

void dfs(int num) {
	check[num] = true;
	st.push(num);
	while (!st.empty()) {
		int temp = st.top();
		cout << temp << " ";
		st.pop();
		for (int i = 0; i < (int)v[temp].size(); i++) {
			if (!check[v[temp][i]]) {
				dfs(v[temp][i]);
			}
		}
	}
}

void bfs(int num) {
	check[num] = true;
	q.push(num);
	while (!q.empty()) {
		int temp = q.front();
		cout << temp << " ";
		q.pop();
		for (int i = 0; i < (int)v[temp].size(); i++) {
			if (!check[v[temp][i]]) {
				q.push(v[temp][i]);
				check[v[temp][i]] = true;
			}
		}
	}

}

int main() {
	cin >> n >> m >> start;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		sort(v[i].begin(), v[i].end());
	}
	dfs(start);
	cout << "\n";
	memset(check, false, 1001);
	bfs(start);
	

	return 0;
}