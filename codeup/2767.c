#include <stdio.h>
// if(k <= 2) return 1;
// return f(k-2)+f(k-1);
int num[21];

long long int f(int n) {

  return num[n] = num[n-1] + num[n-2];
}

int main() {
  int k, n;
  scanf("%d %d", &k, &n);
  for(int i=0; i<k; i++)
    scanf("%d", &num[i]);
  printf("%lld\n", f(n));
}