#include <stdio.h>
int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int num = b-c;
  printf(num>a ? "advertise" : num==a ? "does not matter" : "do not advertise");
  return 0;
}