#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  int num = a;
  int num2 = num;
  for (int i = 0; i < a; i++) {
    int num2 = num;
    for (int j = 0; j < a; j++) {
      printf("%d ", num2);
      num2--;
    }
    printf("\n");
    num += a;
  }
}