#include <stdio.h>
int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d", ((a%2==0) ? a*5 : (a+1)/2) + ((b%2==0) ? b*5 : (b+1)/2));
  return 0;
}