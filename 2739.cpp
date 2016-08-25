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
		for (int i = 1; i <= 9; i++){
			cout << num << " * " << i << " = " << num*i << endl;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
