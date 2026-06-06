#include <stdio.h>
int main() {
    int n, b[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while(n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i++;
    }
   printf("Binary = ");
    for(int j = i - 1; j >= 0; j--)
        printf("%d", b[j]);
 return 0;
}