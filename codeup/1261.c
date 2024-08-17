#include <stdio.h>

int main(void) {
  int num[11];
  for(int i=1; i<=10; i++) {
    scanf("%d", &num[i]);
    if(num[i]%5==0) {
      printf("%d", num[i]);
      return 0;
    }
  }
  printf("0");
  return 0;
}