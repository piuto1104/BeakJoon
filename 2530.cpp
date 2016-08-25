#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>

using namespace std;

class Wang{
public:
	int hour, minute, second;
	int input;
	void Set(){
		cin >> hour >> minute >> second >> input;
		second += input;
	}
	void Get(){
		if (second >= 60){
			minute += second / 60;
			second = second % 60;
		}
		if (minute >= 60){
			hour += minute / 60;
			minute = minute % 60;
		}
		if (hour >= 24){
			hour = hour % 24;
		}

		cout << hour << " " << minute << " " << second;
	}
};

int main(){
	Wang w;
	w.Set();
	w.Get();
	return 0;
}

