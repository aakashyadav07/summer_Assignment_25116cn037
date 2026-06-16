#include <stdio.h>
int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Union: ");

    for(int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);}

    for(int i = 0; i < n2; i++) {
        int found = 0;
 for(int j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                found = 1;
                break;  }}

        if(!found) {
                printf("%d ", arr2[i]); }}  

    return 0; }