#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define min(a,b) (a<b?a:b)

using namespace std;

long long i;
long long n;
long long r;

long long FiveCheck(long long num){
	long long count = 0;
	for (i = 5; num / i >= 1; i *= 5)count += num / i;
	return count;
}

long long TwoCheck(long long num){
	long long count = 0;
	for (i = 2; num / i >= 1; i *= 2)count += num / i;
	return count;
}

void Run(){
	long long count = 0;

	cin >> n >> r;

	long long five = 0, two = 0;
	five += FiveCheck(n);
	if (r != 0)five -= FiveCheck(r);
	if (n != r)five -= FiveCheck(n - r);
	two += TwoCheck(n);
	if (r != 0)two -= TwoCheck(r);
	if (n != r)two -= TwoCheck(n - r);

	cout << min(two, five);
}

int  main(){
	Run();
	return 0;
}