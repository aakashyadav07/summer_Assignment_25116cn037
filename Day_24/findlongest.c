#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[100], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Longest Word: %s", longest);

    return 0;
}