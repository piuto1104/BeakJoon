#include <stdio.h>
#include <queue>

using namespace std;

int input;
int in;
priority_queue<int> q;

int main() {
	scanf("%d",&input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &in);
		q.push(in);
		if (in == 0) {
			printf("%d\n", q.top());
			q.pop();
		}
	}
	return 0;
}