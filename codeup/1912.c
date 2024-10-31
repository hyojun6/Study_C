#include <stdio.h>

int f(int a) {
  return (a==1) ? 1 : (a*f(a-1));
}

int main(void) {
  int a;
  scanf("%d", &a);
  printf("%d", f(a));
  return 0;
}