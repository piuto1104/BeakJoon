#include <iostream>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

typedef struct wang {
	int num, cnt;
}info;

int input;
info in, temp;
queue<info> q;

int main() {
	cin >> input;
	in.num = input;
	in.cnt = 0;
	q.push(in);
	while (!q.empty()) {
		temp = q.front();
		q.pop();
		if (temp.num == 1) {
			break;
		}
		if (temp.num % 3 == 0) {
			in.num = temp.num / 3;
			in.cnt = temp.cnt + 1;
			q.push(in);
		}
		if (temp.num % 2 == 0) {
			in.num = temp.num / 2;
			in.cnt = temp.cnt + 1;
			q.push(in);
		}
		in.num = temp.num - 1;
		in.cnt = temp.cnt + 1;
		q.push(in);
	}
	cout << temp.cnt;
	return 0;
}