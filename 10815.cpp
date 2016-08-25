#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;


int N, M, in;
int front, rear;
int arr[500001];


int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + N);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d",&in);
		printf("%d ", binary_search(arr, arr + N, in));
	}

	return 0;

}