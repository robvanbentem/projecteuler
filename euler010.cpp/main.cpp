#include <iostream>
#include <math.h>

using namespace std;

bool is_prime_bruteforce(int n){

  int lim = sqrt(n)+1;

  if(n%2 == 0) return false;

  for(int t = 3; t < lim; t+=2){
    if(n%t == 0) return false;
  }

  return true;
}

int main(int argc, char* argv[]){
  long long sum = 2;

  for(int n = 3; n < 2e6; n+=2){
    if(is_prime_bruteforce(n)){
      sum += n;
    }
  }

  cout << "euler 10, sum: " << sum << endl;

  return 0;
}
