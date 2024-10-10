#include <stdio.h>

long long int f(int k) {
  if(k <= 2) return 1;
  return f(k-2)+f(k-1);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%lld\n", f(n));
}