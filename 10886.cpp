#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int roof,input,t,f;
	Wang(){
		t = 0;
		f = 0;
	}
	void set(){
		cin >> roof;
		for (int i = 0; i < roof; i++){
			cin >> input;
			if (input == 0){
				f++;
			}
			else{
				t++;
			}
		}
	}
	void get(){
		cout << ((t > f) ? "Junhee is cute!" : "Junhee is not cute!");
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}

