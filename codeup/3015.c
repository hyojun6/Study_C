#include <stdio.h>
int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void delete (int n) {
  int i;
  while (arr[i] != '\0')
    arr[n] = arr[n + 1];
}

int main(void) {
  int n;
  scanf("%d", &n);
  delete (n);
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}