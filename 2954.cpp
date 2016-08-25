#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	string input, output;
	char A[100], B[100];
	int A_ptr, B_ptr;
	void Run(){
		A_ptr = 0;
		B_ptr = 0;

		getline(cin,input);

		for (int i = 0; i < input.size(); i++){
			A[A_ptr++] = input[i];
			if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u'){
				i += 2;
			}
		}
		A[A_ptr] = '\0';

		cout << A ;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
