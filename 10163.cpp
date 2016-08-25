#include <iostream>
#include <vector>

using namespace std;

typedef struct wang {
	int x, y;
	int x_size, y_size;
	int count;
}w;

int board[101][101];

int main() {
	int size;
	w in;
	vector<w> input;
	cin >> size;
	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			board[i][j] = -1;
		}
	}

	for (int i = 0; i < size; i++) {
		cin >> in.x >> in.y >> in.x_size >> in.y_size;
		in.count = 0;
		input.push_back(in);
	}

	for (int i = 0; i < size; i++) {
		
		for (int j = input[i].x; j < input[i].x + input[i].x_size; j++) {
			for (int k = input[i].y; k < input[i].y + input[i].y_size; k++) {
				if (board[j][k] == -1) {
					board[j][k] = i;
					input[i].count++;
				}
				else {
					int temp = board[j][k];
					input[temp].count--;
					board[j][k] = i;
					input[i].count++;
				}
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << input[i].count << "\n";
	}

	return 0;
}