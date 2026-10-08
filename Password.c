#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main () {
    char pass[15];
    int i = 0;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0, len = 0, WhiteSpace = 1;
    char ch = '-';
    printf("Enter a password: ");
    scanf("%[^\n]", pass); getchar();

    len = strlen(pass);
    for (i = 0; i < len; i++) {
        ch = pass[i];
        hasUpper = (isupper(ch)) ? 1 : hasUpper;
        hasLower = (islower(ch)) ? 1 : hasLower;
        hasDigit = (isdigit(ch)) ? 1 : hasDigit;
        
        if (ch == '!' || ch == '@' || ch == '#' || ch == '?' || ch == '*' || ch == '#' 
            || ch == '_' || ch == '*' || ch == '-') {
            hasSpecial = 1;
        }

        WhiteSpace = isspace(ch) ? 0 : WhiteSpace;

    }

    if (len > 12) {
        printf("Password can only be up to 12 characters long.\n");
    }  if (!hasUpper) {
        printf("Password must contain at least one uppercase letter.\n");
    }  if (!hasLower) {
        printf("Password must contain at least one lowercase letter.\n");
    }  if (!hasDigit) {
        printf("Password must contain at least one digit.\n");
    }  if (!hasSpecial) {
        printf("Password must contain at least one special character (!, @, #, ?, *, _, -).\n");
    }  if (!WhiteSpace) {
        printf("Password must not contain any whitespace characters.\n");
    }

    if (len <= 12 && hasUpper && hasLower && hasDigit && hasSpecial && WhiteSpace) {
        printf("Password is valid.\n");
    }

}