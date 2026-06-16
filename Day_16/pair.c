

#include <stdio.h>
int main() {
    int arr[] = {2, 4, 3, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    printf("Pairs are:\n");
  for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("(%d, %d)\n", arr[i], arr[j]);    }  } }
 return 0;}