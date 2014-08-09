#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]){

  int  sum = 0, sqr = 0;

  for(int n = 1; n <= 100; n++){
    sum += pow(n, 2);
    sqr += n;
  }

  int ans = pow(sqr,2) - sum;


  cout << "euler solution 6: " << ans << endl;
  return 0;
}
