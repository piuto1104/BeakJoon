#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

int V, E, x, y;
bool check[10001];
vector<int> v[10001];
vector<int> r[10001];
vector<vector<int> > re;
vector<int> temp, store;

void dfs(int num) {
	check[num] = true;
	for (int i = 0; i < (int)v[num].size(); i++) {
		if (!check[v[num][i]]) {
			dfs(v[num][i]);
		}
	}
	temp.push_back(num);
}
void r_dfs(int num) {
	check[num] = true;
	store.push_back(num);
	for (int i = 0; i < (int)r[num].size(); i++) {
		if (!check[r[num][i]]) {
			r_dfs(r[num][i]);
		}
	}
}

int main() {
	cin >> V >> E;

	for (int i = 0; i < E; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		r[y].push_back(x);
	}
	memset(check, false, V+1);
	for (int i = 1; i <= V; i++) {
		if (!check[i]) {
			dfs(i);
		}
	}
	memset(check, false, V+1);
	for (int i = temp.size()-1; i >= 0; i--) {
		if (!check[temp[i]]) {
			r_dfs(temp[i]);
			sort(store.begin(), store.end());
			re.push_back(store);
			store.clear();
		}
	}
	sort(re.begin(), re.end());
	cout << (int)re.size() << "\n";
	for (int i = 0; i < (int)re.size(); i++) {
		for (int j = 0; j < (int)re[i].size(); j++) {
			cout << re[i][j] << " ";
		}
		cout<< "-1\n";
	}

	return 0;
}