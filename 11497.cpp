#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int size;
	int *arr;
	int height;
	void set(){
		cin >> size;
		arr = new int[size];
		for (int i = 0; i < size; i++){
			cin >> arr[i];
		}
		sort(arr, arr + size);
	}
	void get(){
		height = 0;
		for (int i = 0; i < size - 2; i++){
			if (arr[i + 2] - arr[i] > height){
				height = arr[i + 2] - arr[i];
			}
		}
		cout << height << endl;
	}
};

int main(){
	Wang w;
	int roof;
	cin >> roof;
	for (int i = 0; i < roof; i++){
		w.set();
		w.get();
	}
	return 0;
}