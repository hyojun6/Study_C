#include <stdio.h>
int main(void) {
  int num[8];
  int n[7];
  int i, j, s = 0, seven = 0;
  for (i = 1; i < 8; i++) {
    scanf("%d ", &num[i]);
  }

  for (j = 1; j < 7; j++) {
    scanf("%d", &n[j]);
  }

  for (i = 1; i < 7; i++) {
    for (j = 1; j < 8; j++) {
      if (n[i] == num[j]) {
        if (j == 7)
          seven++;
        else
          s++;
      }
    }
  }

  switch (s) {
  case 6:
    printf("1");
    break;

  case 5:
    if (seven == 1) {
      printf("2");
    } else {
      printf("3");
    }
    break;
  case 4:
    printf("4");
    break;
  case 3:
    printf("5");
    break;
  default:
    printf("0");
    break;
  }
}