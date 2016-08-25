#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	int N;
	int *perm;
	cin >> N;
	perm = new int[N];

	for (int i = 0; i<N; i++) {
		perm[i] = i + 1;
	}
	do {
		for (int i = 0; i < N; i++) {
			cout << perm[i] << " ";
		}
		cout << "\n";
	} while (next_permutation(perm, perm + N));

	return 0;
}