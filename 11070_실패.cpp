#include <iostream>

using namespace std;

typedef struct wang {
	long long plus, minus;
	double expectation;
}w;

long long n, m, a, b, p, q;
int roof;
w arr[1001];

int main() {
	cin >> roof;
	for (int k = 0; k < roof; k++) {

		cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			arr[i].minus =arr[i].plus = 0;
		}
		for (int i = 0; i < m; i++) {
			cin >> a >> b >> p >> q;
			arr[a].plus += p;
			arr[a].minus += q;
			arr[b].plus += q;
			arr[b].minus += p;
		}
		for (int i = 1; i <= n; i++) {
			arr[i].expectation = (double)(arr[i].plus*arr[i].plus) / ((arr[i].plus* arr[i].plus) + (arr[i].minus*arr[i].minus));
		}
		float max = arr[1].expectation, min = arr[1].expectation;
		for (int i = 2; i <= n; i++) {
			if (max < arr[i].expectation) {
				max = arr[i].expectation;
			}
			if (min > arr[i].expectation) {
				min = arr[i].expectation;
			}
		}

		cout << (long long)(max * 1000) << "\n" << (long long)(min * 1000) << "\n";
	}
	return 0;
}