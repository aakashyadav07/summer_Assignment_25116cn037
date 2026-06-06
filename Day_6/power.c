#include <stdio.h>

int main() {
    int x, n;
    long long res = 1;
 printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for(int i = 1; i <= n; i++) {
        res *= x;
    }
  printf("%d^%d = %lld", x, n, res);
return 0;
}