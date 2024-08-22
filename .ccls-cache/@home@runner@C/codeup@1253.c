#include <stdio.h>
int main(void) {
  int a, b, ch;
  scanf("%d %d", &a, &b);
  if (a > b) {
    ch = a;
    a = b;
    b = ch;
  }
  for (int i = a; i <= b; i++) {
    printf("%d ", i);
  }
  return 0;
}