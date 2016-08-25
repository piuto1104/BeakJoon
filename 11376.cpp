#include <iostream>
#include <vector>

using namespace std;

int n, m, temp, in, result;
vector<int> worker[1001];
vector<int> work;
vector<bool> check;

bool dfs(int num) {
	int size = worker[num].size();
	for (int i = 0; i < size; i++) {
		int ptr = worker[num][i];
		if (check[ptr]) {
			continue;
		}
		else {
			check[ptr] = true;
			if (work[ptr] == -1 || dfs(work[ptr])) {
				work[ptr] = num;
				return true;
			}
		}
	}
	return false;
}

int main() {
	cin >> n >> m;
	check.assign(m + 1, false);
	work.assign(m + 1, -1);
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		for (int j = 0; j < temp; j++) {
			cin >> in;
			worker[i].push_back(in);
		}
	}
	for (int i = 1; i <= n; i++) {
		check.assign(n + 1, false);
		if (dfs(i)) {
			result++;
		}
	}
	for (int i = 1; i <= n; i++) {
		check.assign(n + 1, false);
		if (dfs(i)) {
			result++;
		}
	}
	cout << result;
	return 0;
}