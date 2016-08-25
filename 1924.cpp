#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	/*
	int sizeX, sizeY;
	int time = 0;
	int count = 0;
	int **arr;
	int move[4][2] = { (0,1),(1,0),(0,-1),(-1,0) };
	cin >> sizeX >> sizeY;
	arr = new int*[sizeY];


	for (int i = 0; i < sizeY; i++) {
		arr[i] = new int[sizeX];
	}
	for (int i = 0; i < sizeY; i++) {
		for (int j = 0; j < sizeX; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				count++;
			}
		}
	}
	if (count == 0) {
		cout << -1;
	}
	else if (count == sizeX*sizeY) {
		cout << 0;
	}
	else {
		while (count < sizeX*sizeY) {

			for (int i = 0; i < sizeY; i++) {
				for (int j = 0; j < sizeX; j++) {
					if (arr[i][j]) {
						for (int k = 0; k < 4; k++) {

						}
					}

				}
			}

		}
	}*/
	int x, y, day = 0;
	cin >> x >> y;

	for (int i = 1; i < x; i++) {
		switch (i) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			day += 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			day += 30;
			break;
		case 2:
			day += 28;
			break;
		default:
			break;
		}
	}
	day += y;
	day = day % 7;

	switch (day)
	{
	case 0:
		cout << "SUN";
		break;
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	default:
		break;
	}

	return 0;
}