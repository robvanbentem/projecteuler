#include <iostream>
#include <math.h>

using namespace std;

bool is_triplet(int a, int b, int c){
  return (pow(a,2) + pow(b,2) == pow(c, 2));
}

int main(int argc, char* argv[]){

  int a,b,c;

  // bruteforce solution
  for(a = 1; a < 333; a++){
    for(b = (a+1); b < (666-a); b++){
      c = 1000-a-b;

      if(is_triplet(a,b,c)) {
        cout << "solution for euler 9: " << a << "*" << b << "*" << c << "=" << (a*b*c) << endl;
        return 0;
      }

    }
  }

  return 0;
}
