#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int roof;
	int size;
	char check;
	int standard;
	int *arr_int;
	char *arr_char;
	void Run(){
		standard = (int)'A' -1;
		cin >> roof;
		for (int i = 0; i < roof; i++){
			cin >> size >> check;
			if (check == 'C'){
				arr_char = new char[size];
				for (int j = 0; j < size; j++){
					cin >> arr_char[i];
					cout << (int)(arr_char[i] - standard) << endl;
				}
			}
			else if (check == 'N'){
				arr_int = new int[size];
				for (int j = 0; j < size; j++){
					cin >> arr_int[i];
					cout << (char)(arr_int[i]+standard) << endl;
				}
			}
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}