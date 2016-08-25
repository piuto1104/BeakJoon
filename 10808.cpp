#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	string input;
	int alphabet[26];
	void set(){
		cin >> input;
		for (int i = 0; i < 26; i++){
			alphabet[i] = 0;
		}
	}
	void get(){
		for (int i = 0; i < input.size(); i++){
			alphabet[input[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++){
			cout << alphabet[i] << " ";
		}
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}

