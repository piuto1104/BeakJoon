#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string input;

int OneZero(int flag){
	if (flag == 0){
		return 1;
	}
	else if(flag == 1){
		return 2;
	}
	else{
		return 4;
	}
}

void Run(){
	cin >> input;
	int rear;
	int flag = 0;
	int temp_num = 0;
	int total_num = 0;
	bool last = true;
	vector<int> re;
	rear = input.size() - 1;
	while (rear >= 0){
		last = true;
		if (input[rear--] == '1'){
			temp_num += OneZero(flag);
		}
		flag++;
		if (flag == 3){
			re.push_back(temp_num);
			temp_num = 0;
			flag = 0;
			last = false;
		}
	}
	if (last){
		re.push_back(temp_num);
	}

	for (int i = re.size()-1; i >= 0; i--){
		cout << re[i];
	}

}

int main(){
	Run();
	return 0;
}