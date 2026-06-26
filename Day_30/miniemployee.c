#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[5];
    int i;

    printf("Enter Employee Details\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nEmployee Records\n");

    for(i = 0; i < 5; i++) {
        printf("\nID     : %d", e[i].id);
        printf("\nName   : %s", e[i].name);
        printf("\nSalary : %.2f\n", e[i].salary);
    }

    return 0;
}