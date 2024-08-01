#include <stdio.h>
int main(void) {
  char name[51][20];
  int score[51];
  int n, num, i, j;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    scanf("%s %d", name[i], &score[i]);
  }
  for (i = 1; i <= n; i++) {
    num = 0;
    for (j = 1; j <= n; j++) {
      if (score[i] < score[j])
        num++;
    }
    if (num == 2) {
      printf("%s", name[i]);
      break;
    }
  }
  return 0;
}