#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int i, j;
	int x, y;
	char **arr;
	void Run(){
		cin >> x>>y;
		arr = new char*[x];
		for (i = 0; i < x; i++){
			arr[i] = new char[y];
		}
		for (i = 0; i < x; i++){
			for (j = 0; j < y; j++){
				cin >> arr[i][j];
			}
		}
		for (i = 0; i < x; i++){
			for (j = y-1; j >= 0; j--){
				cout << arr[i][j];
			}
			cout << endl;
		}

		
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}