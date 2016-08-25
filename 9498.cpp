#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int num;

	void Run(){
		cin >> num;
		num /= 10;
		switch (num)
		{
		case 10:
		case 9:
			cout << "A";
			break;
		case 8:
			cout << "B";
			break;
		case 7:
			cout << "C";
			break;
		case 6:
			cout << "D";
			break;
		default:
			cout << "F";
			break;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
