#include <stdio.h>
int main(void) {
  int n, k;
  scanf("%d %d", &n, &k);
  int result = n;
  for(int i=0; i<k-1; i++){
    result *= n;
  }
  if(k==0)
    printf("1");
  else
    printf("%d", result);
  return 0;
}