#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int input_size, xy_size, x, y, temp, i, j, count;
	int *input, *x_input, *y_input;
	Wang(){
		count = input_size = xy_size = x = y = temp = 0;
		input = x_input = y_input = NULL;
	}

	void Set(){
		cin >> input_size >> xy_size;
		input = new int[input_size+xy_size-1];
		x_input = new int[xy_size];
		y_input = new int[xy_size];

		for (i= 0; i < xy_size; i++){
			cin >> x_input[i];
		}
		for (i= 0; i < xy_size; i++){
			cin >> y_input[i];
		}
		x = Compose(x_input);
		y = Compose(y_input);

		for (i= 0; i < input_size; i++){
			cin >> input[i];
		}
		for (j = 0; j < xy_size - 1; j++,i++){
			input[i] = input[j];
		}
	}
	void Get(){
		int k;
		count = 0;
		for (k = 0; k < input_size; k++){
			temp = Compose(&input[k]);
			if (x <= temp && temp <= y){
				count++;
			}
		}
		cout << count<<endl;
	}

	void Print(){
		cout << x << endl << y << endl;
		for (i= 0; i < input_size+xy_size-1; i++){
			cout << input[i] << " ";
		}
		cout << endl;
	}

	int Compose(int *arr){
		int output = 0;
		for (i= 0; i < xy_size; i++){
			if (i == 0){
				output = arr[i];
			}
			else{
				output = output * 10;
				output += arr[i];
			}
		}
		return output;
	}
};

int main(){
	Wang w;
	int roof;
	cin >> roof;
	for (int i = 0; i < roof; i++){
		w.Set();
		w.Get();
	}
	return 0;
}