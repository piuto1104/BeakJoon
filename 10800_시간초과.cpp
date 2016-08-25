#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

typedef struct WW{
	int color;
	int size;
	int value;
}WW;

class Wang{
public:
	int num, i, j;
	WW *input;
	void set(){
		cin >> num;
		input = new WW[num];
		for (i = 0; i < num; i++){
			cin >> input[i].color >> input[i].size;
			input[i].value = 0;
		}
	}
	void get(){

		for (i = 0; i < num; i++){
			for (j = 0; j < num; j++){
				if (i != j){
					if (input[i].color != input[j].color){
						if (input[i].size > input[j].size){
							input[i].value += input[j].size;
						}
					}
				}
			}
		}

		for (i = 0; i < num; i++){
			//cout << input[i].color << " " << input[i].size << " " << input[i].value << endl;
			cout << input[i].value << endl;
		}
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
