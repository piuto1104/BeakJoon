#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int x_input, y_input, x_top, x_bottom, y_top, y_bottom;
	int x, y;
	int search;
	int **stage;
	bool onoff;
	void set(){
		cin >> y_input >> x_input >> search;
		if (x_input*y_input < search){
			cout << 0;
		}
		else{
			stage = new int*[x_input];
			for (int i = 0; i < x_input; i++){
				stage[i] = new int[y_input];
			}
			
			snail();
		}

	}
	void snail(){
		x_top = x_input - 1;
		y_top = y_input - 1;
		x_bottom = y_bottom = x = y = 0;
		for (int i = 0; i < x_input; i++){
			stage[x][y] = i + 1;
			
			if (i + 1 == search){
				cout << x + 1 << y + 1;
				return ;
			}
			x++;
		}


	}
};

int main(){
	Wang w;
	while (1){
		w.set();
	}
	return 0;
}
