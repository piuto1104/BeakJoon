#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

string input;
int alphabet[26];

void Run(){
	for (int i = 0; i < 26; i++){
		alphabet[i] = -1;
	}

	cin >> input;
	for (int i = 0; i < input.size(); i++){
		if (alphabet[(input[i] - 'a')] == -1){
			alphabet[(input[i] - 'a')] = i;
		}
	}
	for (int i = 0; i < 26; i++){
		cout << alphabet[i] << " ";
	}


};


int main(){
	Run();
	return 0;
}