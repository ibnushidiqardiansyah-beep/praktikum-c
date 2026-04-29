#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char str[]) {
    int i, len;
    char temp;

    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int is_palindrome(char str[]) {
    int i, len;
    len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

void to_upper(char str[]) {
    int i;

    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    char kata[100], salin[100];

    printf("Masukkan kata: ");
    scanf("%s", kata);

    strcpy(salin, kata);

    if(is_palindrome(salin))
        printf("Palindrome\n");
    else
        printf("Bukan palindrome\n");

    to_upper(salin);
    printf("Huruf besar : %s\n", salin);

    reverse(salin);
    printf("Reverse     : %s\n", salin);

    return 0;
}