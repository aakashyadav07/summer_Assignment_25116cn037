#include <stdio.h>

int palindrome(int n)
{ int rev = 0, temp = n, rem;
 while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;  } 
          if (temp == rev)
        return 1;
    else
        return 0;}
int main()
{   int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   if (palindrome(num))
        printf("Palindrome");
    else
        printf("Not Palindrome");
  return 0;
}