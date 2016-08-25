#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

typedef struct WW{
	int num;
	int color;
	int size;
	int value;
}WW;

bool cmp(WW a, WW b) { return a.size > b.size; }
bool cmp2(WW a, WW b) { return a.num < b.num; }

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
			input[i].num = i;
		}
		sort(input, input + num, cmp);
	}
	void get(){

		for (i = 0; i < num; i++){
			for (j = i + 1; j < num; j++){
				if (input[i].color != input[j].color &&input[i].size > input[j].size){
					input[i].value += input[j].size;
				}
			}
		}

		sort(input, input + num, cmp2);
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
