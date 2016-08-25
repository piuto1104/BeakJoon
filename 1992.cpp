#include<iostream>

using namespace std;

int input;
char arr[65][65];

void Quad(int x,int y, int size){
	char temp = arr[x][y];
	bool check = false;
	for (int i = x; i < x + size; i++) {
		for (int j = y; j < y + size; j++) {
			if (arr[i][j] != temp) {
				check = true;
				break;
			}
		}
		if (check) {
			break;
		}
	}

	if (!check) {
		cout << temp;
	}
	else {
		int gap = size / 2;
		cout << "(";
		Quad(x, y, gap);
		Quad(x, y + gap, gap);
		Quad(x + gap, y, gap);
		Quad(x + gap, y + gap, gap);
		cout << ")";
	}
}

int main() {
	cin >> input;
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			cin >> arr[i][j];
		}
	}

	Quad(1,1,input);

	return 0;
}