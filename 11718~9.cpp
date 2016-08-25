#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Wang{
public:
	string line;

	void get(){
		while (getline(std::cin, line))
		{
			cout << line << endl;
		}
	}
};

int main(){
	Wang w;
	w.get();
	return 0;
}