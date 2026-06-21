#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);
    length = strlen(str);

    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;  }
    printf("Reversed string: %s", str);

    return 0;
}
