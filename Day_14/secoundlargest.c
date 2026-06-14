#include <stdio.h>

int main()
{
    int a[10], n, i;
    int largest, second;
 printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = second = a[0];
  for(i = 1; i < n; i++)
    {   if(a[i] > largest)   {
            second = largest;
            largest = a[i];    }
        else if(a[i] > second && a[i] != largest)
        { second = a[i];   } }

    printf("Second Largest = %d", second);

    return 0;
}