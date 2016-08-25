#include <iostream>

using namespace std;

class Wang{
public:
	int num;
	int arr[10];

	void Run(){
		cin >> num;
		for (int i = 0; i<10; i++){
			arr[i] = 0;
		}
		for (int i = num; i > 0; i--){
			check(i);
		}
		for (int i = 0; i<10; i++){
			cout<<arr[i]<<" ";
		}

	}
	void check(int _num){
		while (_num){
			arr[_num % 10]++;
			_num /= 10;
		}
	}
};

int main(){
	Wang w;
	w.Run();
	return 0;
}
