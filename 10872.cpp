#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Wang{
public:
	unsigned int n;
	unsigned int total = 1;

	void Run(){
		cin >> n;
		for (; n != 0; n--){
			total *= n;
		}
		cout << total;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
