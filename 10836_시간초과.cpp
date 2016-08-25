#include <iostream>
#include <stdio.h>
#include <queue>

#pragma warning (disable:4996)
using namespace std;
int in;
int arr[701][701];
int N, M;
int large;
int z, o, t;
int input[2000];

void Input() {
	scanf("%d %d %d", &z, &o, &t);
	int i = 0;
	for (; i < z; i++) {
		input[i] = 0;
	}
	for (; i < z + o; i++) {
		input[i] = 1;
	}
	for (; i < z + o + t; i++) {
		input[i] = 2;
	}
}

int main() {
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			arr[i][j] = 1;
		}
	}
	for (int roof = 0; roof < M; roof++) {
		Input();
		int x = 1, y = 1, i = 0;
		for (x = N; x >= 1; x--) {
			arr[x][y] += input[i++];
		}
		for (x++, y++; y <= N; y++) {
			arr[x][y] += input[i++];
		}
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 2; j <= N; j++) {
			large = max(max(arr[i - 1][j], arr[i][j - 1]), arr[i - 1][j - 1]);
			arr[i][j] = large;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}