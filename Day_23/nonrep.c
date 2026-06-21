#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for(i = 0; str[i]; i++) {
        if(freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c", str[i]);
            return 0;  }  }
  printf("No non-repeating character");
     return 0;
}