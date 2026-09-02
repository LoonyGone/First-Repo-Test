#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main () {
    char str[100];
    printf("Enter a word (max 100 characters): ");
    scanf("%99s", str);

    if (is_palindrome(str)) {
        printf("%s IS a palindrome.\n", str);
    } else {
        printf("%s is NOT a palindrome.\n", str);
    }

    printf("REMINDER: The result is CASE-SENSITIVE. Please type in ALL-CAPS or all-lowercase letters.\n");

    return 0;
}