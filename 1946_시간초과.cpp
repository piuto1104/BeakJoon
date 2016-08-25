//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//typedef struct wang {
//	int first, second;
//}info;
//int roof, n, pass, j;
//info arr[100001];
//
//bool comp(const info &a, const info &b) {
//	if (a.first < b.first) {
//		return true;
//	}
//	return false;
//}
//
//
//int main() {
//	cin >> roof;
//	for (int r = 0; r < roof; r++) {
//		cin >> n;
//		for (int i = 1; i <= n; i++) {
//			cin >> arr[i].first >> arr[i].second;
//		}
//		sort(arr, arr + n, comp);
//		pass = 1;
//		for (int i = 2; i <= n; i++) {
//			for (j = i - 1; j > 0; j--) {
//				if (arr[i].second > arr[j].second) {
//					break;
//				}
//			}
//			if (j == 0) {
//				pass++;
//			}
//		}
//
//		cout << pass<<"\n";
//	}
//	return 0;
//}