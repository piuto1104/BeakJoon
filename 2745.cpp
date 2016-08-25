#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


string N;
long long B;
long long total;

long long Num(char N, int roof){
	long long out = 1;
	long long change = 0;
	if (N >= 'A' && N <= 'Z'){
		out = (long long)(N - 'A' + 10);
	}
	else{
		out = (long long)(N - '1' + 1);
	}

	for (int i = 0; i < roof; i++){
		out *= B;
	}
	return out;
}

void Run(){
	cin >> N >> B;
	total = 0;

	for (int i = 0, j = N.size() - 1; i < N.size(); i++, j--){
		//cout << N[j] << "*" << B << "ÀÇ" << i << "½Â" << endl;
		total += Num(N[j], i);
	}
	cout << total;

}

int main(){
	Run();
	return 0;
}
