#include <iostream>
#include <math.h>
#include <cstring>
#include <algorithm>

using namespace std;

bool arr[1000005];

void Eratos(int s, int e){
	
	memset(arr, false, e + 1);
	arr[0] = true;
	arr[1] = true;

	for (int i = 2; i <= e; i++) {
		if (arr[i]) {
			continue;
		}
		for (int j = i + i; j <= e; j += i) {
			arr[j] = true;
		}
	}
	for (int i = s; i <= e; i++) {
		if(!arr[i])
			cout << i << "\n";
	}

}

int main(){
	int start, end;
	cin >> start >> end;
	Eratos(start,end);

	return 0;
}
