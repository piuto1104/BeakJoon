#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int a[6];
	void Run(){
		cin >> a[0] >> a[1];
		a[5] = a[0] * a[1];

		for (int i = 0; i < 3; i++){
			a[i + 2] = a[0] * (a[1] % 10);
			a[1] = a[1] / 10;
		}

		for (int i = 2; i < 6; i++){
			cout << a[i] << endl;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}