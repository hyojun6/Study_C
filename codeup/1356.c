#include <stdio.h>

int main(void) {
  int n, i, j;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    if (i == 1 || i == n) {
      for (j = 0; j < n; j++)
        printf("*");
    } else {
      printf("*");
      for (j = 0; j < n - 2; j++)
        printf(" ");
      printf("*");
    }
    printf("\n");
  }
  return 0;
}