#include <stdio.h>
int main() {
    int n, i, j, Prime;

    printf("Enter n: ");
    scanf("%d", &n);
 printf("Prime numbers are:\n", n);

    for (i = 2; i <= n; i++) {
        Prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }}
            if (Prime)
            printf("%d ", i);
    }

    return 0;
}