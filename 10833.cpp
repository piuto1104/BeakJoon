#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int input;
	int *student;
	int *apple;
	int total;
	Wang(){
		input = 0;
		total = 0;
	}
	void set(){
		student = new int[input];
		apple = new int[input];
		for (int i = 0; i < input; i++){
			cin >> student[i] >> apple[i];
		}
		check();
		print();
	}
	void check(){
		for (int i = 0; i < input; i++){
			total += apple[i] % student[i];
		}
	}
	void print(){
		cout << total;
	}
};

int main(){
	Wang ww;
	cin >> ww.input;
	ww.set();
	return 0;
}