#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  int num = 1;
  for (int i = 1; i <= a; i++) {

    for (int j = a - 1; j >= 0; j--) {
      if (i % 2 == 0)
        printf("%d ", 1 + a * (i - 1) + j);
      else
        printf("%d ", num);
      num++;
    }
    printf("\n");
  }
}