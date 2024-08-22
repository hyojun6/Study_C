#include <stdio.h>
int main(void) {
  int a, b, c;
  float n1, n2, n3;
  scanf("%f %d %f %d %f %d", &n1, &a, &n2, &b, &n3, &c);
  printf("%.1f", n1 * a + n2 * b + n3 * c);
}