#include <stdio.h>
int main() {
    int a[10][10];
    int r, c, i, j, sum;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Row-wise Sum:\n");
    for(i = 0; i < r; i++) {
        sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];

        printf("Sum of Row %d = %d\n", i + 1, sum);     }

    return 0; }