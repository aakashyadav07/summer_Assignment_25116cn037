#include <stdio.h>
int main() {
    int start, end;

 printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    for(int num = start; num <= end; num++) {
        int temp = num, r, sum = 0;

        while(temp > 0) {
            r = temp % 10;
            sum += r * r * r;
            temp /= 10;}
           if(sum == num)
            printf("%d ", num);
    }
 return 0;
}