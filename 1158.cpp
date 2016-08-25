#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Wang{
public:
	int size;
	int input_index;
	int point;
	vector<int> input;
	vector<int>::iterator index;

	void Set(){
		cin >> size >> input_index;
		for (int i = 0; i < size; i++){
			input.push_back(i + 1);
		}
		point = input_index - 1;
		index = input.begin() + point;
	}
	void Get(){
		cout << "<";
		while (1){
			cout << *index;
			input.erase(index);
			if (input.empty()){
				break;
			}
			point += input_index - 1;
			if (point > input.size()){			//warning ºÎºÐ
				point %= input.size();
			}
			index = input.begin() + point;
			cout << ", ";
		}
		cout << ">";
	}
};

class Wang2{
public:
	int size;
	int input_index;
	int point;
	int input[5000];
	int index;

	void Set(){
		cin >> size >> input_index;
		for (int i = 0; i < size; i++){
			input[i] =(i + 1);
		}
		point = input_index - 1;
		index = point;
	}
	void Get(){
		cout << "<";
		while (1){
			cout << input[index];
			Erase(index);
			if (size == 0){
				break;
			}
			index += point;
			if (index >= size){
				index %= size;
			}
			cout << ", ";
		}
		cout << ">";
	}
	void Erase(int _index){
		for (int i = _index; i < size-1; i++){
			input[i] = input[i + 1];
		}
		size--;
	}
};

int main(){
	Wang2 w;
	w.Set();
	w.Get();
	return 0;
}