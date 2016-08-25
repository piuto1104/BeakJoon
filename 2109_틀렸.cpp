//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <queue>
//
//using namespace std;
//
//int n, pay, index;
//int arr[10001][10001];
//vector<int> v[10001];
//
//bool comp(const int a, const int b) {
//	if (a > b)
//		return true;
//	return false;
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> pay >> index;
//		v[index].push_back(pay);
//	}
//	for (int i = 0; i < 10001; i++) {
//		if (!v[i].empty()){
//			sort(v[i].begin(),v[i].end(),comp);
//		}
//	}
//	cout << 1;
//
//	return 0;
//}