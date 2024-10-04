#include <stdio.h>
int main(void) {
  int n1, n2;
  float ch = 0;
  float result = 0, max = 0;
  scanf("%d %d", &n1, &n2);
  for (int i = 0; i < 2; i++) {
    if (n1 + n2 > max)
      max = n1 + n2;
    if (n1 - n2 > max)
      max = n1 - n2;
    if (n1 / n2 > max)
      max = n1 / n2;
    if (n1 * n2 > max)
      max = n1 * n2;
    result = n1;
    for (int i = 0; i < n2 - 1; i++)
      result *= n1;
    if (result > max)
      max = result;
    ch = n1;
    n1 = n2;
    n2 = ch;
  }
  printf("%f\n", max);
}