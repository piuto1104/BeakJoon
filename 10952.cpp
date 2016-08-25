#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int A, B;

	void Run(){
		while (1){
			cin >> A >> B;
			if (A == 0 && B == 0)
				break;
			cout << A + B<<endl;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
