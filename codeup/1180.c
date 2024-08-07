#include <stdio.h>

int main(void) {
  int a, num;
  scanf("%d", &a);
  num = 2*((a%10)*10 + (a/10));
  (num>100) ? num-=100 : (num);
  printf(((num<=50) ? ("%d\nGOOD") : ("%d\nOH MY GOD")),num);
  return 0;
}