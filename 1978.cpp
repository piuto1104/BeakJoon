#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int Run(int data, int count){
	int p=2, count=0;
	while (data != 1){
		if (data%p == 0){
			data = data / p;
			count++;
			p = 2;
		}
		else{
			p++;
		}
	}

	if (count == 1)
		count++;


	return count;
}

int main(){
	int roof;
	int count;
	int *arr;
	cin >> roof;
	arr = new int[roof];
	count = 0;
	for (int i = 0; i < roof; i++){
		cin >> arr[i];
		count = Run(arr[i], count);
	}
	cout << count;
	return 0;
}
