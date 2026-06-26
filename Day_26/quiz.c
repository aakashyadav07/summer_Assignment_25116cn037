#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== QUIZ =====\n");

    printf("\n1. Capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 2)
        score++;

    printf("\n2. C language was developed by?\n");
    printf("1. Dennis Ritchie\n2. Bjarne Stroustrup\n3. James Gosling\n4. Guido van Rossum\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 1)
        score++;

    printf("\n3. 2 + 5 = ?\n");
    printf("1. 5\n2. 6\n3. 7\n4. 8\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 3)
        score++;

    printf("\nYour Score = %d/3\n", score);

    if (score == 3)
        printf("Excellent!\n");
    else if (score == 2)
        printf("Good!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}