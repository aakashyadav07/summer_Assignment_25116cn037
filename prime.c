#include <stdio.h>
int main() {
    int n, i, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        Prime = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }}}

    if (Prime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}