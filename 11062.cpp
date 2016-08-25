//11062 카드게임
#include <iostream>
#include <algorithm>

using namespace std;

int input, sub;
int arr[1001];
int sum[1001];
int table[1001][1001];


int main() {
	int in ;
	cin >> in;
	for (int r = 0; r < in; r++) {
		cin >> input;
		sub = 0;
		for (int i = 1; i <= input; i++) {
			cin >> arr[i];
			sub += arr[i];
			sum[i] = sub;
			table[i][i] = arr[i];
		}
		for (int roof = 2; roof <= input; roof++) {
			for (int i = 1, j = roof; j <= input; i++, j++) {
				table[i][j] = sum[j] - sum[i - 1] - min(table[i][j - 1], table[i + 1][j]);
			}
		}
		cout << table[1][input]<<"\n";
	}
	return 0;
}