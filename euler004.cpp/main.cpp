#include <iostream>
#include <stdio.h>

using namespace std;

bool is_palindrome(int n){
  int tmp, rev = 0, ori = n;

  while(n > 0){
    rev *= 10;
    tmp = n%10;
    rev += tmp;

    n -= tmp;
    n /= 10;

  }

  return ori == rev;
}

int main(int argc, char ** argv){

  int largest = 0, sum;

  for(int x = 999; x > 0; x--){
    for(int y = 999; y > 0; y--){
      sum = x*y;
      if(is_palindrome(sum)){
        if(sum > largest){
          largest = sum;
        }
      }
    }
  }

  cout << largest  << endl;


  return 0;
}
