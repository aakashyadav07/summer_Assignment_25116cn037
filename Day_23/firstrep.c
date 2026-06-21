#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i]; i++) {
        freq[(unsigned char)str[i]]++;

        if(freq[(unsigned char)str[i]] == 2) {
            printf("First repeating character: %c", str[i]);
            return 0;   }  }
    printf("No repeating character");
    return 0;
}