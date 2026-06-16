#include <stdio.h>
int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {30, 40, 60, 70};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Common Elements: ");
 for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;}}}
 return 0;}