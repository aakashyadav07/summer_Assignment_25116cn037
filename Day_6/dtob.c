#include <stdio.h>

int main() {
    long long binary;
    int d = 0, b = 1, r;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while(binary > 0) {
        r = binary % 10;
        d += r * b;
        b *= 2;
        binary /= 10;
    }
 printf("Decimal = %d", d);

    return 0;
}