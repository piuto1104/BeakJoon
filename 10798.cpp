#include <iostream>
#include <string>
#include <math.h>
#include <queue>
#include <list>

using namespace std;

class Wang{
public:
	char input[20];
	int size;
	queue<char> q[5];

	void set(){
		size = 0;
		for (int i = 0; i < 5; i++){

			cin >> input;
			for (int j = 0; j < 16; j++){
				if (input[j] == '\0'){
					if (size < j)
						size = j;
					break;
				}
				q[i].push(input[j]);
			}
		}
	}

	void get(){
		for (int i = 0; i < size; i++){
			for (int j = 0; j < 5; j++){
				if (!q[j].empty()){
					cout << q[j].front();
					q[j].pop();
				}
			}
		}
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	return 0;
}
