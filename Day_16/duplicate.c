#include <stdio.h>
int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array after removing duplicates: ");

    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;

        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                break;    } }
      if(!isDuplicate) {
            printf("%d ", arr[i]);  } }

    return 0;}