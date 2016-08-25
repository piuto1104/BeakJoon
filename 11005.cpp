#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long input;
long long size_check;
int B;
void Print(int num){
	if (num < 10){
		cout << num;
	}
	else{
		cout << (char)('A' + num - 10);
	}
}

void Run(){
	cin >> input >> B;
	int roof =0;
	vector<int> re;
	size_check = 1;
	while (input){
		re.push_back(input%B);
		input /= B;
	}
	for (int i = re.size() - 1; i >= 0; i--){
		Print(re[i]);
	}
}

int main(){
	Run();
	return 0;
}