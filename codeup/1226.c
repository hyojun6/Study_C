#include <stdio.h>

int main(void) {
  int n[7];
  int a[6];
  int i,j,sum=0;

  for(i=1; i<=7; i++) {
    scanf("%d", &n[i]);
  }
  for(j=1; j<=6; j++) {
      scanf("%d", &a[j]);
    }

  for(i=1; i<=7; i++) {
    for(j=1; j<=6; j++) {
      if(i==7 && sum==5) {
        if(n[i] == a[j]) {
          sum+=2;
        }
        break;
      } else{break;}

      if(n[i] == a[j]) {
        sum++;
      }
    }
  }

  switch (sum) {
    case 6:
      printf("1");
      return 0;
    case 7:
      printf("2");
      return 0;
    case 5:
      printf("3");
      return 0;
    case 4:
      printf("4");
      return 0;
    case 3:
      printf("5");
      return 0;
  }
  printf("0");
  return 0;
}