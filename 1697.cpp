#include <iostream>
#include <queue>

using namespace std;

typedef struct wang {
	int N;
	int time;
}w;
int N, K;
w in;
w now;
queue<w> q;
bool check[100001] = { false, };

int main() {
	cin >> N >> K;
	in.N = N;
	in.time = 0;
	check[in.N] = true;
	q.push(in);
	if (N == K) {
		cout << 0;
	}
	else {
		while (1) {
			now = q.front();
			q.pop();
			if (now.N * 2 <= 100000 && !check[now.N * 2]) {
				in.N = now.N * 2;
				if (in.N == K) {
					cout << now.time + 1;
					break;
				}
				in.time = now.time + 1;
				check[in.N] = true;
				q.push(in);
			}
			if (now.N - 1 >= 0 && !check[now.N - 1]) {
				in.N = now.N - 1;
				if (in.N == K) {
					cout << now.time + 1;
					break;
				}
				in.time = now.time + 1;
				check[in.N] = true;
				q.push(in);
			}
			if (now.N + 1 <= 100000 && !check[now.N + 1]) {
				in.N = now.N + 1;
				if (in.N == K) {
					cout << now.time + 1;
					break;
				}
				in.time = now.time + 1;
				check[in.N] = true;
				q.push(in);
			}
		}
	}

	return 0;
}