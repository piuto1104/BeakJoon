#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	long long big;
	long long small;

	void set(){
		cin >> big >> small;
	}
	void get(){
		long long roof;
		roof = gcd(big, small);

		for (long long i = 0; i<roof; i++){
			cout << 1;
		}
		//cout << lcm(big, small) << endl;
	}

	long long max(long long a, long long b){
		if (a > b)
			return a;
		else
			return b;
	}

	long long min(long long a, long long b) {
		if (a > b)
			return b;
		else
			return a;
	}
	/** 유클리드 알고리즘을 통해 최대 공약수와 최소 공배수를 구함. **/
	long long euclid(long long a, long long b) {
		if (b == 0)
			return a;
		return euclid(b, a % b);
	}

	/* 최대 공약수 */
	long long gcd(long long a, long long b) {
		return euclid(max(a, b), min(a, b));
	}

	/* 최소 공배수 */
	long long lcm(long long a, long long b) {
		return (a * b) / gcd(a, b);
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}

