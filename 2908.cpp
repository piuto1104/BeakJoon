#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int a,b;
	
	void Run(){
		cin >> a >> b;
		a = turn(a);
		b = turn(b);

		if (a > b){
			cout << a;
		}
		else{
			cout << b;
		}
	}
	int turn(int data){
		int temp = 0;;

		while (1){
			temp *= 10;
			temp += data % 10;
			data /= 10;
			if (!(data % 10)){
				break;
			}
		}
		return temp;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
