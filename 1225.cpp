#include <iostream>
#include <string>
#include <math.h>

#define Multiple(A,B) A*B;

using namespace std;

class Wang{
public:
	string a, b;
	long long result;
	void set(){
		result = 0;
		cin >> a >> b;
	}
	void get(){
		for (int i = 0; i < a.size(); i++){
			for (int j = 0; j < b.size(); j++){
				result += (a[i]-48) * (b[i]-48);
				cout << result << endl;
			}
		}
		cout << result;
	}
};

class Wang2{
public:
	long long A, B, BB;
	long long Amod, Bmod;
	long long result;
	void set(){
		result = 0;
		cin >> A >> B;
	}
	void get(){
		while (1){
			Amod = A % 10;
			BB = B;
			while (1){
				Bmod = BB % 10;
				
				result += Multiple(Amod, Bmod);
				if ( !(BB / 10))
					break;
				else
					BB /= 10;
			}
			if (!(A / 10))
				break;
			else
				A /= 10;
		}
		cout << result;
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
