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
	/** ��Ŭ���� �˰����� ���� �ִ� ������� �ּ� ������� ����. **/
	long long euclid(long long a, long long b) {
		if (b == 0)
			return a;
		return euclid(b, a % b);
	}

	/* �ִ� ����� */
	long long gcd(long long a, long long b) {
		return euclid(max(a, b), min(a, b));
	}

	/* �ּ� ����� */
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

