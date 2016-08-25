#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int A,B,C;

	void Run(){
		cin >> A >> B >> C;

		cout << (A + B) % C << endl << (A%C + B%C) % C << endl << (A*B) % C << endl << (A%C * B%C) % C;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}