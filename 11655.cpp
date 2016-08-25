#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

string input;

void ROT13(char input){
	if (input >= 'A' && input <= 'Z'){
		if ((int)input >= (int)'N'){
			cout << (char)(input - 13);
		}
		else{
			cout << (char)(input + 13);
		}
	}
	else if (input >= 'a' && input <= 'z'){
		if ((int)input >= (int)'n'){
			cout << (char)(input - 13);
		}
		else{
			cout << (char)(input + 13);
		}
	}
	else{
		cout << input;
	}
}

void Run(){
	getline(cin, input);
	for (int i = 0; i < input.size(); i++){
		ROT13(input[i]);
	}
};


int main(){
	Run();
	return 0;
}