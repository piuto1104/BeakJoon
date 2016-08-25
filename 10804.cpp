#include <iostream>
#include <string>
#include <math.h>
#include <stack>
#include <list>

using namespace std;

class Wang{
public:
	int card[20];
	stack<int> ss;
	int start, end;
	
	void set(){
		for (int i = 0; i < 20; i++){
			card[i] = i + 1;
		}
	}

	void get(){
		for (int i = 0; i < 10; i++){
			cin >> start >> end;
			start--;
			end--;
			for (int j = start; j <=end; j++){
				ss.push(card[j]);
			}
			for (int j = start; j <=end; j++){
				card[j] = ss.top();
				ss.pop();
			}
		}
	}

	void print(){
		for (int i = 0; i < 20; i++){
			cout<< card[i] << " ";
		}
		cout << endl;
	}
};

int main(){
	Wang w;
	w.set();
	w.get();
	w.print();
	return 0;
}
