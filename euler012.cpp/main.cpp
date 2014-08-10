#include <stdio.h>
#include <iostream>
#include <math.h>


int divtri(long L){
  long n, lim = sqrt(L)+1; // limit test to sqrt of L and count matches x2 (e.g. 100%5 is 5 and 20)
  int cnt = 1; // L%L

  for(n = 1; n <= lim; n++){
    if(L%n == 0) cnt+=2;
  }

  return L%2 == 0 ? cnt-1 : cnt; // correct the sqrt counting twice
}

int main() {
  int last = 1;
  long num = 1;

  while(1){
    if(divtri(num) > 500) break;
    num += ++last;
  }

  printf("euler 12 solution: %d w\\ %d divisors\n", num, divtri(num));
}

