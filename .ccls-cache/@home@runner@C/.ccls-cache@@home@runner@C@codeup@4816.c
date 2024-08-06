#include <stdio.h>
int main(void) {
  int time, a, b, c;
  scanf("%d", &time);
  a = time / 300;
  time %= 300;
  b = time / 60;
  time %= 60;
  c = time / 10;
  time %= 10;
  if (time != 0) {
    printf("-1");
  } else {
    printf("%d %d %d", a, b, c); }
  return 0;
}