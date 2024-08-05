#include <stdio.h>
int main(void) {
  int y, m;
  scanf("%d %d", &y, &m);
  printf((y%400==0 || (y%4==0 && y%100!=0))&&m==2 ? "29" : m==1||m==3||m==5||m==7||m==8||m==10||m==12 ? "31" : m==2 ? "28" : "30");
  return 0;
}