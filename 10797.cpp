#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int input;
	int car[5];
	int count;
	void set(){
		count = 0;
		cin >> input;
		for (int i = 0; i < 5; i++){
			cin >> car[i];
			if (input == car[i])
				count++;
		}
		cout << count;
	}
};

int main(){
	Wang w;
	w.set();
	return 0;
}