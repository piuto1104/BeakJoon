#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	int big;
	int small;

	void set(){
		cin >> big >> small;
	}
	void get(){
		cout << gcd(big, small)<<endl;

		cout << lcm(big, small) << endl;
	}

	int max(int a, int b){
		if (a > b)
			return a;
		else
			return b;
	}

	int min(int a, int b) {
		if (a > b)
			return b;
		else
			return a;
	}
	/** 유클리드 알고리즘을 통해 최대 공약수와 최소 공배수를 구함. **/
	int euclid(int a, int b) {
		if (b == 0)
			return a;
		return euclid(b, a % b);
	}
	
	/* 최대 공약수 */
	int gcd(int a, int b) {
		return euclid(max(a, b), min(a, b));
	}
	
	/* 최소 공배수 */
	int lcm(int a, int b) {
		return (a * b) / gcd(a, b);
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}

