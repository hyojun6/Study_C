#include <stdio.h>

int main(void) {
  int n[3], sum=0;
  scanf("%d %d", &n[1], &n[2]);
  for(int i=1; i<=2; i++)
    sum += (n[i]==1 ? 400 : n[i]==2 ? 340 : n[i] == 3 ? 170 : n[i]==4 ? 100 : 70);
  printf(sum>500 ? "angry" : "no angry"); 
  return 0;
}