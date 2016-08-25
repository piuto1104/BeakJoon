#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	string hint;
	string search;
	bool check;
	int count;
	void Run(){
		cin >> hint >> search;
		count = 0;
		for (int i = 0; i < hint.size(); i++){
			if (hint[i] == search[0]){
				check = true;
				for (int j = 0; j < search.size(); j++){
					if (hint[i + j] == search[j]){
						check =true;
					}
					else{
						check = false;
					}
				}
				if (check){
					count++;
				}
			}
		}
		cout << count;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}