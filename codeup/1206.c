#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d", &a, &c);
  if (c % a == 0) {
    printf("%d*%d=%d", a, c / a, c);
    return 0;
  }
  if (a % c == 0) {
    printf("%d*%d=%d", c, a / c, a);
    return 0;
  }
  printf("none");

  return 0;
}