#include <stdio.h>

int main(void) {
  int board[12][11];
  int i, j;

  for (i = 1; i < 11; i++) {
    for (j = 1; j < 11; j++) {
      scanf("%d", &board[i][j]);
    }
  }
  for (i = 1; i < 11; i++) {
    scanf("%d", &board[11][i]);
  }
  for (i = 1; i < 11; i++) {
    if (board[11][i] == 1) {

      for (j = 10; j >= 1; j--) {
        if (board[j][i] != 0) {
          printf("%d %s\n", i, (board[j][i] > 0) ? "crash" : "fall");
          goto end;
        }
        if (j == 1) {
          if (board[j][i] == 0)
            printf("%d %s\n", i, "safe");
        }
      }
    }
  end:
    i = i;
  }
}