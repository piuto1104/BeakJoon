#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int arr[3];

	void Run(){
		cin >> arr[0] >> arr[1] >> arr[2];

		sort(arr, arr + 3);
		cout << arr[1];
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
