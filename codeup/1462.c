#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  int num = a;

  for (int i = 1; i <= a; i++) {
    num = i;
    for (int j = 0; j < a; j++) {
      printf("%d ", num);
      num += a;
    }
    printf("\n");
  }
}