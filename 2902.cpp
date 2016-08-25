#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	string input;
	char a[101];
	int a_ptr;
	void Run(){
		a_ptr = 0;
		cin >> input;
		a[a_ptr++] = input[0];
		for (int i = 1; i < input.size(); i++){
			if (input[i] == '-'){
				a[a_ptr++] = input[i + 1];
			}
		}
		a[a_ptr] = '\0';
		cout << a;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
