#include <iostream>
#include <math.h>
#include <cstring>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

bool arr[1000005];
int in =-1;
int a, b;
vector<int> v;

void Eratos(int s, int e) {

	memset(arr, false, e + 3);
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
		if (!arr[i])
			v.push_back(i);
	}

}

void want(int num) {
	a = 0; b = 0;
	for (int i = 1; i < (int)v.size(); i++) {
		for (int j = 1; j < (int)v.size(); j++) {
			if (num - v[i] == v[j]) {
				if (a + b < v[i] + v[j]) {
					a = v[i];
					b = v[j];
				}
			}
			else if(v[i]+v[j] > num){
				break;
			}
		}
		if (v[i] > num) {
			break;
		}
	}
	if (a != 0 && b != 0) {
		cout << num << " = " << min(a, b) << " + " << max(a, b) << "\n";
	}
	else {
		cout << "Goldbach's conjecture is wrong.\n";
	}
}

int main() {
	Eratos(2, 1000000);
	int num = v.size();
	
	
	while (in) {
		cin >> in;
		if (in == 0)
			break;
		want(in);
	}
	return 0;
}
