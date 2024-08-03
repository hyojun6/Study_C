#include <stdio.h>

int main(void) {
  int n, i, j, sum = 0;
  int arr[101][101];
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n; j++) {
      arr[i][j] = (j - 1) * n + i;
    }
  }
  for (i = 1; i <= n; i++) {
    sum += arr[1][i];
  }
  for (i = 2; i < n; i++) {
    sum += arr[i][1] + arr[i][n];
  }
  for (i = 1; i <= n; i++) {
    sum += arr[n][i];
  }
  printf("%d", sum);
}