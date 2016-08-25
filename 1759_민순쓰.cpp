#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Wang{
public:
	int L, C;
	char *arr, temp;
	
	void set(){
		cin >> L >> C;
		arr = new char[C+1];
		for (int i = 0; i < C; i++){
			cin >> arr[i];
		}
		sort(arr, arr + C);
	}
	void get(){
		//го╠Б╫х╬Н

	}

	void output(char *c){
		for (int i = 0; i < L; i++){

		}
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
