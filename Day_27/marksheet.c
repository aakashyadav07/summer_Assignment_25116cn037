#include <stdio.h>

int main() {
    char name[50];
    int roll;
    float m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects:\n");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    printf("\n------ Marksheet ------\n");
    printf("Roll No: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90)
        printf("Grade: A+\n");
    else if (percentage >= 75)
        printf("Grade: A\n");
    else if (percentage >= 60)
        printf("Grade: B\n");
    else if (percentage >= 40)
        printf("Grade: C\n");
    else
        printf("Grade: Fail\n");

    return 0;
}