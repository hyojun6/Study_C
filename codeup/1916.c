#include <stdio.h>
long long int memo[201];

long long f1(int k) {
  if (memo[k] != 0)
    return memo[k];
  if(k<=1)
    return 1;
  return memo[k] = (f1(k-1) + f1(k-2)) % 10009;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%lld\n", f1(n-1));
}