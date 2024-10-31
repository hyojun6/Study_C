#include <stdio.h>
int main(void) {
  int n;
  long long num[1001];
  long long max=0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    scanf("%lld", &num[i]);
    if(max<=num[i])
      max = num[i];
  }
  printf("%lld", max);
  return 0;
}