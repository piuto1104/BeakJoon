#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int roof;
	void Run1(){		//2438
		cin >> roof; 
		for (int i = 0; i < roof; i++){
			for (int j = 0; j < roof; j++){
				if (i >= j){
					cout << "*";
				}
			}
			cout << endl;
		}
	}
	void Run2(){		//2439
		cin >> roof;
		for (int i = 0; i < roof; i++){
			for (int j = roof-1; j >= 0; j--){
				if (i >= j){
					cout << "*";
				}
				else{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	void Run3(){		//2440
		cin >> roof;

		for (int i = 0; i < roof; i++){
			for (int j = roof - 1; j >= 0; j--){
				if (i <= j){
					cout << "*";
				}
			}
			cout << endl;
		}
	}
	void Run4(){		//2441
		cin >> roof;

		for (int i = 0; i < roof; i++){
			for (int j = 0; j < roof; j++){
				if (i <= j){
					cout << "*";
				}
				else{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	void Run5(){		//2442
		cin >> roof;
		for (int i = 0; i < roof; i++){
			for (int j = roof - 1; j >= -roof; j--){
				if (i < j){
					cout << " ";
				}
				else if (i<-j){
				}
				else{
					cout << "*";
				}

			}
			cout << endl;
		}
	}
};

int main(){
	Wang w;
	w.Run5();
	return 0;
}