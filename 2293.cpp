#include <iostream>
#include <vector>

using namespace std;

int coin[101];
int dp[10001];
int n, k;

void solve() {
}

int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}
	dp[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = coin[i]; j <= k; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}
	cout << dp[k];
	return 0;
}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int coin[101];
//int dp[10001];
//int n, k;
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> coin[i];
//	}
//	dp[0] = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = coin[i]; j <= k; j++) {
//			dp[j] += dp[j - coin[i]];
//		}
//	}
//	cout << dp[k];
//	return 0;
//}