#include <stdio.h>

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = 0;
  for (int i = 0; i < n; i++) {               // Move non-zero elements to front
        if (arr[i] != 0) {
            arr[index++] = arr[i];   } }

            while (index < n) {               // Fill remaining positions with 0
        arr[index++] = 0;  }

        printf("Array after moving zeroes: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);   }
   return 0;
}