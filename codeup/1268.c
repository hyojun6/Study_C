#include <stdio.h>

int main(void) {
  int a;
  int num;
  int sum=0;
  scanf("%d", &a);
  for(int i=1; i<=a; i++) {
    scanf("%d", &num);
    if(num%2!=0) {
      sum++;
    }
  }
  printf("%d", sum);
  return 0;
}