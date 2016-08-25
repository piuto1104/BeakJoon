#include <stdio.h>
#include <algorithm>

using namespace std;

int input;
int in;
int arr[10001];


int main() {
	scanf("%d", &input);

	for (int i = 0; i < input; i++) {
		scanf("%d", &in);
		arr[in]++;
	}
	
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}


	return 0;
}