#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef struct wang {
	int h;
	int time;
}info;

int num,s, g,info_cnt , x, y;
bool check[101];
vector<int> v[101];
info in,temp;
queue<info> q;

int main() {
	cin >> num >> s >> g>>info_cnt;
	for (int i = 0; i < info_cnt; i++){
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	in.h = s;
	in.time = 0;
	check[in.h] = true;
	q.push(in);
	while (!q.empty()) {
		temp = q.front();
		q.pop();
		if (temp.h == g) {
			cout << temp.time;
			break;
		}
		for (int i = 0; i < (int)v[temp.h].size(); i++) {
			if (!check[v[temp.h][i]]) {
				in.h = v[temp.h][i];
				in.time = temp.time + 1;
				check[in.h] = true;
				q.push(in);
			}
		}
	}
	if (temp.h != g) {
		cout << -1;
	}
	return 0;
}

/*
// 기윤햄 소스
#include <stdio.h>
int main()
{
	int head[101] = { 0, };
	int N, M;
	int i, j;
	int a, b;
	scanf("%d", &N);
	scanf("%d %d", &a, &b);
	scanf("%d", &M);
	for (i = 0; i < M; i++)
	{
		int p, q;
		scanf("%d %d", &p, &q);
		head[q] = p;
	}
	int dst[101] = { 0, };
	int amove = 0, bmove = 0;
	int p = a, q = b;
	while (head[p])
	{
		p = head[p];
		dst[p] = ++amove;
		if (p == b)
		{
			printf("%d", amove);
			return 0;
		}
	} // p 진행 도중 b를 만나지 못하였음
	while (head[q])
	{
		q = head[q];
		bmove++;
		if (dst[q] || q == a)
		{
			printf("%d", dst[q] + bmove);
			return 0;
		}
	}
	printf("-1");
	return 0;
}

*/