#include <stdio.h>
int main() {
    int num, temp, r, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(temp > 0) {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }
    if(sum == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is Not an Armstrong Number", num);

    return 0;
}