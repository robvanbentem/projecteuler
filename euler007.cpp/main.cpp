#include <iostream>
#include <math.h>

using namespace std;

bool is_prime_bruteforce(int n){

  int lim = ceil(n/2);

  if(n%2 == 0) return false;

  for(int t = 3; t < lim; t+=2){
    if(n%t == 0) return false;
  }

  return true;
}

int main(int argc, char* argv[]){

  int nth = 1, t = 1;

  while(nth < 10001){
    t+=2;
    if(is_prime_bruteforce(t)) nth++;
  }

  cout << "euler 7, 10001th prime: " << t << endl;

  return 0;
}
