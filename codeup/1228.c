#include <stdio.h>

int main(void) {
  double k, m;
  scanf("%lf %lf", &k, &m);

  double avm = (k - 100) * 0.9;
  double result = (m - avm) * 100 / avm;

  if (result > 20)
    printf("비만\n");
  else if (result > 10)
    printf("과체중\n");
  else
    printf("정상\n");
  return 0;
}