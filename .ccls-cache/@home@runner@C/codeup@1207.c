#include <stdio.h>
int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int sum = a + b + c + d + 0;
  printf(sum == 0   ? "모"
         : sum == 1 ? "도"
         : sum == 2 ? "개"
         : sum == 3 ? "걸"
                    : "윷");
}