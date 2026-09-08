#include <stdio.h> // I mean, come on. This is literally in every C program
#include <string.h> // ...String. That's it. Anything starting with "str" is in this library
#include <stdbool.h> // For "True" and "False" definitions

bool is_palindrome(const char *str) {
    int left = 0; // Hey! It's the very start!
    int right = strlen(str) - 1; // Every string ends with /0, so we subtract 1 to get the last character

    while (left < right) { // Holy checks bruh
        if (str[left] != str[right]) {
            return false;
        }
        left++; // Move forward (first to second) and stuff
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