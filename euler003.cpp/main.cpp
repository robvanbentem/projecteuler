#include "math.h"
#include <cstdlib>
#include <stdio.h>

int gcd ( int a, long b )
{
  int c;
  while (a!=0) {
    c = a;
    a = b%a;
    b = c;
  }
  return b;
}

long f(int n, int r, long N){
  return ((long)(pow(n,2) + r)) % N;
}

// pollard rho algo
int factor(long N){
  int p, r = rand(), t = 10000,a,b;

  while(--t){
    a = f(2,r,N);
    b = f(f(2,r,N),r,N);
    while(a != b){

      p = gcd(b-a, N);
      if(p > 1){
        return p;
      }

      a = f(a,r,N);
      b = f(f(b,r,N),r,N);
    }
    r = rand();
  }

  return N;
}

int main(int argc, char **argv){
  long N = 600851475143, pf;

  while(1){
    pf = N;
    N = factor(N);

    if(N == pf || N == 1){
      printf("euler solution 3: %d\n", N);
      break;
    } else {
      N = pf / N;
    }
  }
}
