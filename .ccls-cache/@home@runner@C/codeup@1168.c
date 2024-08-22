#include <stdio.h>
int main(void) {
  int num, y, x;
  scanf("%2d%d %d", &y, &x, &num);
  (num<=2) ? printf("%d", 2012-1900-y+1) : printf("%d", 2012-2000-y+1);
  return 0;
}