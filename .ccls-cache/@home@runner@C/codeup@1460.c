#include <stdio.h>

int main(void) {
  int a;
  int num = 1;
  scanf("%d", &a);
  for (int i = 0; i < a; i++) {
    for (int j = 0; j < a; j++) {
      printf("%d ", num);
      num++;
    }
    printf("\n");
  }
}