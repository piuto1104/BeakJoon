#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int roof;
	int size;
	int *arr;

	void Run(){
		cin >> roof;
		for (int i = 0; i < roof; i++){
			cin >> size;
			arr = new int[size];
			for (int j = 0; j < size; j++){
				cin >> arr[j];
			}
			sort(arr, arr + size);
			cout << (arr[size - 1] - arr[0]) * 2 << endl;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
