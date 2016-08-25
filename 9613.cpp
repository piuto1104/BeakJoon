#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdlib.h>

using namespace std;

int roof, size, temp;
vector<int> input;


int max(int a, int b){
	if (a > b)
		return a;
	else
		return b;
}

int min(int a, int b) {
	if (a > b)
		return b;
	else
		return a;
}

int euclid(int a, int b) {
	if (b == 0)
		return a;
	return euclid(b, a % b);
}

int gcd(int a, int b) {
	return euclid(max(a, b), min(a, b));
}

int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}


void get(){
	cin >> roof;
	for (int i = 0; i < roof; i++){
		input.clear();
		cin >> size;
		for (int j = 0; j < size; j++){
			cin >> temp;
			input.push_back(temp);
		}
		temp = 0;
		for (int j = 0; j < size; j++){
			for (int k = j + 1; k < size; k++){
				temp += gcd(input[j], input[k]);
				//cout << gcd(input[j], input[k]) << endl;
			}
		}
		cout << temp << endl;
	}
	//cout << gcd(big, small) << endl;

}

int main(){
	get();
	return 0;
}
