#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int money;
	int count;
	int price;

	void set(){
		cin >> money >> count >> price;
	}
	void get(){
		if (money*count < price){
			cout << 0;
		}
		else{
			cout << money*count - price;
		}
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
