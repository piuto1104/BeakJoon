#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int size, N, *arr;

	void Run(){
		cin >> size >> N;
		arr = new int[size];

		for (int i = 0; i < size; i++)
			cin >> arr[i];
		for (int i = 0; i < size; i++){
			if (arr[i] < N)
				cout << arr[i] << " ";
		}

	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
