#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d %d", &a, &c);
  if (c % a == 0) 
    printf("%d*%d=%d", a, c / a, c);
  else if (a % c == 0)
    printf("%d*%d=%d", c, a / c, a);
  else
    printf("none");
  //printf((c % a == 0) ? "%d*%d=%d", a, c / a, c : (a % c == 0) ? "%d*%d=%d", c, a / c, a : "none");
  return 0;
}