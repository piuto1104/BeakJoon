#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef struct WW{
	int num;
	int value;
}WW;

bool cmp_value(WW a, WW b) { return a.value>b.value; }
bool cmp_num(WW a, WW b) { return a.num>b.num; }

class Wang{
public:
	WW input[8];
	int i, total =0;
	void set(){
		for (i = 0; i < 8; i++){
			input[i].num = i+1;
			cin >> input[i].value;
		}
		sort(input, input + 8, cmp_value);

		get();
	}
	void get(){
		sort(input, input + 5, cmp_num);
		for (i = 0; i < 5; i++){
			total += input[i].value;
			//cout << input[i].num << " " << input[i].value << endl;
		}
		cout << total << endl;
		for (i = 4; i >= 0; i--){
			cout << input[i].num << " ";
		}
	}
};

int main(){
	Wang w;
	w.set();
	return 0;
}