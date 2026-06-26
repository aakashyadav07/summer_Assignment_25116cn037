#include <stdio.h>

int main() {
    int seats = 50;
    int book;

    printf("Available Seats: %d\n", seats);

    printf("Enter number of seats to book: ");
    scanf("%d", &book);

    if(book <= seats && book > 0) {
        seats -= book;
        printf("Booking Successful!\n");
        printf("Remaining Seats: %d\n", seats);
    } else {
        printf("Booking Failed! Not enough seats.\n");
    }

    return 0;
}