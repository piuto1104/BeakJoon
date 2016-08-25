#include <iostream>
#include <vector>
#include <stack>
#include <cstring>
using namespace std;

int N, M ,s,g, temp, cnt;
vector<int> v[1001];
bool check[1001];
stack<int> st;

void dfs(int num) {
	st.push(num);
	check[num] = true;
	while (!st.empty()) {
		int temp = st.top();
		st.pop();
		for (int i = 0; i < v[temp].size(); i++) {
			if (!check[v[temp][i]]) {
				dfs(v[temp][i]);
			}
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> s >> g;
		v[s].push_back(g);
		v[g].push_back(s);
	}
	memset(check, false, N);
	
	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}