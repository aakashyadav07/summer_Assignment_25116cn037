#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;
 for(i = 1; i <= rows; i++) {
  for(j = 1; j <= rows - i; j++)
            printf(" ");
 for(j = 0; j < i; j++)
            printf("%c", 'A' + j);
    for(j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);
   printf("\n");    }
return 0;}