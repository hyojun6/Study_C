#include <stdio.h>
int main(void) {
  int n, i, j;
  scanf("%d", &n);
  int num[1001];
  for (i = 1; i <= n; i++) {
    scanf("%d", &num[i]);
  }
  for (i = 1; i <= n; i++) {
    printf("%d: ", i);
    for (j = 1; j <= n; j++) {
      if (i == j) {
      } else {
        printf((num[i] < num[j]) ? "< " : num[i] == num[j] ? "= " : "> ");
      }
    }
    printf("\n");
  }
  return 0;
}