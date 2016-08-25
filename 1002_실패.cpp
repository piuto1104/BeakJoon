#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Wang{
public:
	float x1, y1, r1, x2, y2, r2, length1, length2;

	void set(){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	}
	void get(){
		length1 = (x1 - x2) * (x1 - x2) + (y1 - y2)*(y1 - y2);
		length2 = (r1 + r2)*(r1 + r2);

		if (-1){
			cout << -1 << endl;
		}
		else if (0){
			cout << 0 << endl;
		}
		else if (length1 < length2){
			cout << 2 << endl;
		}
		else if (length1 = length2){
			cout << 1 << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
	bool minus(){

	}
};

int main(){
	Wang w;
	int roof;
	cin >> roof;
	for (int i = 0; i < roof; i++){
		w.set();
		w.get();
	}
	return 0;
}