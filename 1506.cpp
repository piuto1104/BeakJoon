#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;
char input;
int n, score[101], sum;
bool check[101];
vector<int> v[101];
vector<int> r[101];
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
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> score[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> input;
			if (input == '1') {
				v[i].push_back(j);
				r[j].push_back(i);
			}
		}
	}

	memset(check, false, n+1);
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i);
		}
	}
	memset(check, false, n + 1);
	for (int i = temp.size() - 1; i >= 0; i--) {
		if (!check[temp[i]]) {
			r_dfs(temp[i]);
			sort(store.begin(), store.end());
			re.push_back(store);
			store.clear();
		}
	}
	int roof = re.size();
	for (int i = 0; i < roof; i++) {
		int mi = score[re[i][0]];
		for (int j = 1; j < re[i].size(); j++) {
			mi = min(mi, score[re[i][j]]);
		}
		sum += mi;
	}

	cout << sum;

	return 0;
}