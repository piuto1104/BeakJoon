#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;


class Wang{
public:
	int input;
	int front, rear;
	int count;
	void Set(){
		cin >> input;
		front = input;
		count = 0;
		rear = -1;
	}
	void Get(){
		while (1){
			if (rear == input){
				cout << count;
				break;
			}

			rear = ones_place() + tens_place();
			front = rear;
			count++;
			
		}

	}
	int tens_place(){
		return (front % 10) * 10;
	}
	int ones_place(){
		int temp = front;
		int sum =0;
		while (temp / 10){
			sum += temp % 10;
			temp /= 10;
		}
		sum += temp;
		return sum%10;
	}

};

int main(){
	Wang w;
	w.Set();
	w.Get();
	return 0;
}