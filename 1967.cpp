#include <iostream>
#include <vector>
#include <stack>
#include <cstring>

using namespace std;

typedef struct wang {
	int num;
	int weight;
}info;

int n, s, g, large = -1,t;
info in, in2;
vector<info> v[10001];
stack<int> st;
bool check[10001];

void dfs(int num, int w) {
	st.push(num);
	check[num] = true;
	if (w > large) {
		large = w;
		t = num;
	}
	while (!st.empty()) {
		int temp = st.top();
		st.pop();
		for (int i = 0; i < (int)v[temp].size(); i++) {
			if (!check[v[temp][i].num]) {
				dfs(v[temp][i].num, w+ v[temp][i].weight);
			}
		}
	}
}



int main() {
	cin >> n;
	for (int i = 0; i < n-1; i++) {
		cin >> s >> g >> in.weight;
		in.num = g;
		v[s].push_back(in);
		in2.num = s;
		in2.weight = in.weight;
		v[g].push_back(in2);
	}
	dfs(1, 0);

	large = -1;
	memset(check, false, 10000);
	dfs(t, 0);
	cout << large;
	return 0;
}