#include <stdio.h>
int sum, a;
int result[10000];

int f(int n) {
  int i, z = 0;
  for (i = 1; i <= n; i++) {
    if (n % i == 0)
      z++;
    if (z == 2) {
      sum += i;
      printf("%d\n", i);
      result[a] = i;
      a++;
      break;
    }
  }
  return 0;
}

int main() {
  int n, i;
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    f(i);
  }
  // printf("%d", sum);
  printf("-------------\n");
  for (i = 0; i < n - 1; i++) {
    printf("%d\n", result[i]);
  }

  return 0;
}