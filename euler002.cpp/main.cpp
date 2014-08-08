#include <iostream>
using namespace std;

int fibo(int a, int b, int sum){
	if(b > 4000000) return sum;	
	if(b % 2 == 0) sum += b;
	
	return fibo(b, a+b, sum);
}

int main(int argc, char **argv){
	cout << fibo(1,2,0);
}