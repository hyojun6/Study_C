#include <stdio.h>
int main(void) {
  int h[4];
  scanf("%d %d %d", &h[1], &h[2], &h[3]);
  for(int i=1; i<=3; i++) {
    if(h[i] <= 170) {
      printf("CRASH %d", h[i]);
      return 0;
    }
  }
  printf("PASS");
  return 0;
}