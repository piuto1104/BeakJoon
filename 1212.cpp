#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string input;
bool first = true;


void Binary(int num){
	num = num - '0';
	if (num >= 4){
		cout << 1;
		num -= 4;
		if (num >= 2){
			cout << 1;
			num -= 2;
			if (num == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		else{
			cout << 0;
			if (num == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
	}
	else{
		cout << 0;
		if (num >= 2){
			cout << 1;
			num -= 2;
			if (num == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		else{
			cout << 0;
			if (num == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
	}
}

void Run(){
	cin >> input;
	int fi;
	fi = input[0] - '0';
	if (fi >= 4){
		cout << 1;
		fi -= 4;
		if (fi >= 2){
			cout << 1;
			fi -= 2;
			if (fi == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		else{
			cout << 0;
			if (fi == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
	}
	else{
		if (fi >= 2){
			cout << 1;
			fi -= 2;
			if (fi == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
		else{
			if (fi == 1){
				cout << 1;
			}
			else{
				cout << 0;
			}
		}
	}
	for (int i = 1 ; i < input.size(); i++){
		Binary((int)input[i]);
	}

}

int main(){
	Run();
	return 0;
}