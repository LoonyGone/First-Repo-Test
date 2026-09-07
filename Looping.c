#include <stdio.h>

int main () {
    int i, j;

    for (i = 1; i <= 5; i++) { //1 
        for (j = 1; j <= i; j++) { //1 2 3 4 5
            printf("* ");
        }
        printf("\n");
    }
}