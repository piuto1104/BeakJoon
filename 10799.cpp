#include <iostream>
#include <string>
#include <math.h>
#include <queue>
#include <list>

using namespace std;

class Wang{
public:
	string input;
	char *arr;
	int arr_size;
	int count;
	int total;

	Wang(){
		arr = NULL; 
		arr_size = 0;
		count = 0;
		total = 0;
	}

	void set(){
		cin >> input;
		arr = new char[input.size()];
		int i=0, j=0;
		while (i < input.size()){
			if (input[i] == '(' && input[i + 1] == ')'){
				arr[j++] = '*';
				i++;
			}
			else{
				arr[j++] = input[i];
			}
			i++;
		}
		arr_size = j;
		arr[j] = '\0';
		//cout << arr;
	}
	void get(){
		
		for (int i = 0; i < arr_size; i++){
			if (arr[i] == '*'){
				total += count;
			}
			else if (arr[i] == '('){
				count++;
			}
			else{
				count--;
				total++;
			}
		}
		cout << total;
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
