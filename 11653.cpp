#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Wang{
public:
	int n;

	void Run(){
		cin >> n;
		factorization();
	}

	void factorization(){
		if (n < 2) return;
		int p = 2;
		int primes[20];
		int index = 0;
		int i;

		while (n != 1){
			if (n%p == 0){
				n = n / p;
				primes[index++] = p;
				p = 2;
			}
			else{
				p++;
			}
		}

		if (index == 1) {
			cout << primes[0] << endl;
		}
		else{
			for (i = 0; i < index - 1; i++){
				cout << primes[i] << endl;
			}
			cout << primes[i] << endl;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
