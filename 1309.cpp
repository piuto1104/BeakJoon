#include<iostream>
using namespace std;

int arr[100001][3];
int N;
int mod = 9901;
int main() {
	cin >> N;

	arr[1][0] = 1;
	arr[1][1] = 1;
	arr[1][2] = 1;

	for (int i = 2; i <= N; ++i) {
		arr[i][0] = (arr[i - 1][0] + arr[i - 1][1] + arr[i - 1][2]) % mod;
		arr[i][1] = (arr[i - 1][2] + arr[i - 1][0]) % mod;
		arr[i][2] = (arr[i - 1][1] + arr[i - 1][0]) % mod;

	}
	cout << (arr[N][0] + arr[N][1] + arr[N][2]) % mod << endl;

	return 0;
}