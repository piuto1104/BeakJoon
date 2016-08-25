#include <iostream>

using namespace std;

int input;

int arr[2188][2188];
int m_cnt, z_cnt, o_cnt;

void Paper(int x, int y, int size) {
	int temp = arr[x][y];
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
		if (temp == -1)
			m_cnt++;
		else if (temp == 0)
			z_cnt++;
		else
			o_cnt++;
	}
	else {
		int gap = size / 3;

		Paper(x, y, gap);
		Paper(x, y + gap, gap);
		Paper(x, y + (gap * 2), gap);
		Paper(x + gap, y, gap);
		Paper(x + gap, y + gap, gap);
		Paper(x + gap, y + (gap * 2), gap);
		Paper(x + (gap * 2), y, gap);
		Paper(x + (gap * 2), y + gap, gap);
		Paper(x + (gap * 2), y + (gap * 2), gap);
	}
}

int main() {
	cin >> input;
	for (int i = 1; i <= input; i++) {
		for (int j = 1; j <= input; j++) {
			cin >> arr[i][j];
		}
	}
	Paper(1, 1, input);

	cout << m_cnt << " " << z_cnt << " " << o_cnt ;




	return 0;
}