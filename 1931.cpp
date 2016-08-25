#include <iostream>
#include <algorithm>

using namespace std;

typedef struct wang {
	int start, end;
}info;
int roof, n, pass, j;
info arr[100001];

bool comp(const info &a, const info &b) {
	if (a.end < b.end) {
		return true;
	}
	else if (a.end == b.end) {
		if (a.start < b.start) {
			return true;
		}
	}
	return false;
}


int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].start >> arr[i].end;
	}
	sort(arr, arr + n, comp);

	for (int i = 0; i < n;) {
		j = i + 1;
		while (j <= n) {
			if (arr[i].end > arr[j].end) {
				i = j;
			}
			else if (arr[i].end <= arr[j].start) {
				i = j;
				break;
			}
			else {
				j++;
			}
		}

		pass++;
	}

	cout << pass;

	return 0;
}