#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int a[4];
	int b[2];
	int total;
	void Run(){
		total = 0;
		for (int i = 0; i < 4; i++){
			cin >> a[i];
		}
		for (int i = 0; i < 2; i++){
			cin >> b[i];
		}

		sort(a, a + 4);
		sort(b, b + 2);
		for (int i = 1; i < 4; i++){
			total += a[i];
		}
		total += b[1];
		cout << total;
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}