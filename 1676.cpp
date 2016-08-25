#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define min(a,b) (a<b?a:b)

using namespace std;

int num;

int FiveCheck(int num){
	int count = 0;
	for (int i = 5; num / i >= 1; i *= 5)
		count += num / i;
	return count;
}

int TwoCheck(int num){
	int count = 0;
	for (int i = 2; num / i >= 1; i *= 2)
		count += num / i;
	return count;
}

void Run(){
	cin >> num;
	int five = 0;
	int two = 0;

	if (num == 0){
		cout << 0;
	}
	else{
		for (int i = 1; i <= num; i++){
			five = FiveCheck(i);
			two = TwoCheck(i);
		}
		cout << min(two, five);
	}
}

int  main(){
	Run();
	return 0;
}