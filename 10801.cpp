#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int A[10], B[10];
	int countA, countB;
	void set(){
		countA = 0;
		countB = 0;

		for (int i = 0; i < 10; i++){
			cin >> A[i];
		}
		for (int i = 0; i < 10; i++){
			cin >> B[i];
		}
	}
	void get(){
		for (int i = 0; i < 10; i++){
			if (A[i] < B[i]){
				countB++;
			}
			else if (A[i] > B[i]){
				countA++;
			}
		}

		if (countB < countA){
			cout << "A";
		}
		else if (countB > countA){
			cout << "B";
		}
		else{
			cout << "D";
		}

	}
};

int main(){

	Wang w;
	w.set();
	w.get();
	return 0;
}
