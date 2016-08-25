#include <iostream>
#include <queue>

using namespace std;

typedef struct wang {
	int S;
	int time;
}w;

int F, S, G, U, D;
bool check[1000001];
w in, now;
queue<w> q;

int main() {
	cin >> F >> S >> G >> U >> D;
	in.S = S;
	in.time = 0;
	check[in.S] = true;
	q.push(in);

	while (!q.empty()) {

		now = q.front();
		q.pop();
		if (now.S == G) {
			cout << now.time;
			return 0;
		}
		if (now.S + U <= F && !check[now.S + U]) {
			in.S = now.S + U;
			in.time = now.time + 1;
			check[in.S] = true;
			q.push(in);
		}
		if (now.S - D > 0 && !check[now.S - D]) {
			in.S = now.S - D;
			in.time = now.time + 1;
			check[in.S] = true;
			q.push(in);
		}
	}
	
	cout << "use the stairs";


	return 0;
}