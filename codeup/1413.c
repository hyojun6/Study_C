#include <stdio.h>
#include <string.h>

int main(void) {
  char arr[100];
  fgets(arr, 100, stdin);
  for(int i=strlen(arr)-1; i>=0; i--) {
    printf("%c", arr[i]);
  }
}