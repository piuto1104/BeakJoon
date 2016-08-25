#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int input[8], ascending[8], descending[8];
	bool as, de;
	void Run(){
		as = true;
		de = true;
		for (int i = 0; i < 8; i++){
			cin >> input[i];
			ascending[i] = i + 1;
			descending[i] = 8 - i;
			if (input[i] != ascending[i]){
				as = false;
			}
			if (input[i] != descending[i]){
				de = false;
			}
		}
		if (as){
			cout << "ascending";
		}
		else if (de){
			cout << "descending";
		}
		else{
			cout << "mixed";

		}
		cout << endl;

	}
};

int main(){
	Wang w;
	w.Run();

	return 0;
}
