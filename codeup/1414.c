#include <stdio.h>

int main(void) {
  char ch[101];
  int i = 1, c = 0, cc = 0;

  scanf("%s", ch);
  if (ch[0] == 'c' || ch[0] == 'C') {
    c++;
  }
  while (ch[i] != '\0') {
    if (ch[i] == 'c' || ch[i] == 'C') {
      c++;
      if (ch[i - 1] == 'c' || ch[i - 1] == 'C') {
        cc++;
      }
    }
    i++;
  }
  printf("%d\n%d", c, cc);
  return 0;
}