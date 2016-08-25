#include <iostream>
#include <vector>
#include <string>

using namespace std;

string temp = "temp";
string input;
vector<string> v;

int main() {
	cin >> input;
	int size = input.size();
	for (int i = 0; i < size; i++) {
		v.push_back(input.substr(i));
	}
	for (int i = 0; i < size; i++) {
		for (int j = i; j < size; j++) {
			if (v[i] > v[j]) {
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << v[i] << "\n";
	}
	return 0;
}