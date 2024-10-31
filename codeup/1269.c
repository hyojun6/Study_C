#include <stdio.h>

int main(void) {
  int result, x, plus, n;
  scanf("%d %d %d %d", &result, &x, &plus, &n);
  for(int i=1; i<n; i++)
    result = result * x + plus;
  printf("%d", result);
  return 0;
}