#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i]; i++)
        freq[(unsigned char)str[i]]++;

    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;  }  }
   printf("Maximum occurring character = %c", ch);

    return 0;
}