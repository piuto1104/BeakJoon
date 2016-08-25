#include <iostream>
#include <vector>
using namespace std;

int n;
int check[1001];
int arr[1001][1001];
vector<int> v;

void dfs(int p)
{
	for (int i = 1; i <= n; i++)
		while (arr[p][i] > 0)
		{
			arr[p][i]--; arr[i][p]--;
			dfs(i);
		}
	v.push_back(p);
	return;
}


int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			check[i]+= arr[i][j];
			check[j]+= arr[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		check[i] /= 2;
		if (check[i] % 2) {
			cout << -1;
			return 0;
		}
	}
	dfs(1);
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}

	return 0;
}