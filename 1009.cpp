#include<iostream>
#include<string>
using namespace std;

int main(){

	int a, b;
	int temp = 1;
	int count;

	cin >> count;

	for (int i = 0; i<count; i++){

		cin >> a >> b;

		for (int j = 0; j<b; j++){
			temp *= a;
		}

		cout << temp % 10;
		temp = 1;
	}

}