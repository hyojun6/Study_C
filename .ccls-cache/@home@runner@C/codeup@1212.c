#include <stdio.h>
int main(void) {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf(a>=b && a>=c && b+c>a ? "yes" : b>=a && b>=c && a+c>b ? "yes" : c>=b && c>=a && b+a>c ? "yes" : "no");
  return 0;
}