#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int roof, a, b, i;

	void set(){
		cin >> roof;
		for (i = 0; i < roof; i++){
			cin >> a >> b;
			cout << "You get " << a/b << " piece(s) and your dad gets " << a%b<<" piece(s)." << endl;
		}
	}
};

int main(){
	Wang w;
	w.set();
	return 0;
}