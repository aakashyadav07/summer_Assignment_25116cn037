#include <stdio.h>
int armstrong(int n)
{
 int sum = 0, temp = n, rem;
 while (n > 0) { 
         rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;    }
   if (temp == sum)
        return 1;
    else
        return 0;}

int main(){ 
      int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   if (armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}