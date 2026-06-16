#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
 int first = arr[0];

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];    }

    arr[n - 1] = first;
   printf("Left Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   }
   return 0;
}