#include <iostream>
#include <string>
using namespace std;

string input;
int arr[4];
void CharCheck(char c){
	if (c >= 'a' && c <= 'z'){
		arr[0]++;
	}
	else if (c >= 'A' && c <= 'Z'){
		arr[1]++;
	}
	else if (c >= '0' && c <= '9'){
		arr[2]++;
	}
	else{
		arr[3]++;
	}
}

void Run(){
	while (1){
		getline(cin, input);
		if (input == ""){
			break;
		}
		else{
			for (int i = 0; i < 4; i++){
				arr[i] = 0;
			}
			for (int i = 0; i < input.size(); i++){
				CharCheck(input[i]);
			}
			for (int i = 0; i < 4; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
}

int main(){
	Run();
	return 0;
}