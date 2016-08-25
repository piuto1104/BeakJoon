#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int roof;
string input;
bool onoff_check;
stack<char> in; 

void Run(){
	cin >> roof;
	for (int i = 0; i < roof; i++){
		cin >> input;
		onoff_check = true;

		for (int j = 0; j < input.size(); j++){
			if (input[j] == '('){
				in.push(input[j]);
			}
			else{
				if (in.empty()){
					onoff_check = false;
				}
				else{
					in.pop();
				}
			}
		}
		if (onoff_check && in.empty()){
			cout << "YES"<<endl;
		}
		else{
			cout << "NO" << endl;
		}

		while (!in.empty()){
			in.pop();
		}
	}

};

int main(){
	Run();
	return 0;
}