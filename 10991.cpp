#include <iostream>

using namespace std;

class Star{
public:
	int input;

	Star(){
	}
	Star(int _input){
		this->input = _input;
	}

	void printStar(){
		for (int i = 0; i < input; i++){
			for (int j = 0; j < input - i-1; j++){
				cout << " ";
			}
			for (int j = 0; j <= i; j++){
				if (j == i){
					cout << "*";
				}
				else{
					cout << "* ";
				}
			}
			cout << endl;
		}
	}
};


int main(){
	Star wang;
	cin >> wang.input;

	wang.printStar();
	return 0;
}






