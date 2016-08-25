#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	long long k, a, b, count;
	bool aorb;
	void Run(){
		cin >> k >> a >> b;
		count = 0;
		aorb = true;
		if (a<=0 && b>=0){
			if (a%k == 0 && b%k == 0){

			}
			else if (a%k == 0){
				aorb = false;
				count++;
			}
			else{
				aorb = true;
				count++;
			}
		}
		if (aorb){
			for (long long i = a; i <= b; i = i + k){
				count++;
			}
		}
		else{
			for (long long i = b; i >= a ; i = i - k){
				count++;
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
