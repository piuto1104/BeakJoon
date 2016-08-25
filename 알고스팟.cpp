#include <iostream>

using namespace std;

void Run() {
	int level;
	int **box;
	cin >> level;
	box = new int*[level];
	for (int i = 0; i < level; i++) {
		box[i] = new int[level];
	}
	for (int i = 0; i < level; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> box[i][j];
		}
	}

	for (int i = level - 2; i >= 0; i--) {
		for (int j = 0; j <= i; j++) {
			(box[i + 1][j] > box[i + 1][j + 1]) ? box[i][j] += box[i + 1][j] : box[i][j] += box[i + 1][j + 1];
		}
	}
	cout << box[0][0] << "\n";
}

int main() {
	int roof;
	cin >> roof;
	for (int i = 0; i < roof; i++) {
		Run();
	}
	return 0;
}
