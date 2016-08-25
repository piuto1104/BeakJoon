#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int a, b;
	void Run(){
		cin >> a >> b;
		cout << a*(b - 1) + 1;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
