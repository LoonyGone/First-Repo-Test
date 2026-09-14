#include <stdio.h>

int main () {
    int rows, stars;

    for (rows = 1; rows <= 5; rows++) {
        for (stars = 1; stars <= 5 - rows; stars++) {
            printf(" ");
        }
        for (stars = 1; stars <= rows; stars++) {
            printf("* ");
        }
        printf("\n");
    }

    for (rows = 4; rows >= 1; rows--) {
        for (stars = 1; stars <= 5 - rows; stars++) {
            printf(" ");
        }
        for (stars = 1; stars <= rows; stars++) {
            printf("* ");
        }
        printf("\n");
    }

}