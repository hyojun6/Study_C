#include <stdio.h>
long long int memo[26];

long long int f(int n) {
  if(memo[n]) return memo[n];
  if(n==1) return 1;
  if(n==2) return 2;
  if(n==3) return 4;
  return memo[n] = f(n-1) + f(n-2) + f(n-3);
}

int main(void) {
  scanf("%lld", &memo[0]);
  printf("%lld", f(memo[0]));
  return 0;
}