#include <iostream>

using namespace std;


bool is_divisible(int &n){

  // not very elegant, but does the job fairly quick..
  return (
    n % 19 == 0 &&
    n % 18 == 0 &&
    n % 17 == 0 &&
    n % 16 == 0 &&
    n % 15 == 0 &&
    n % 14 == 0 &&
    n % 13 == 0 &&
    n % 12 == 0 &&
    n % 11 == 0
  );

}

int main(int argc, char** argv){
  int n = 20;

  while(!is_divisible(n)) n+=20;

  cout << "smallest int: " << n << endl;

  return 0;
}
