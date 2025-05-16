#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], str_rev[1000];

    // Read input
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Copy the original string to another for reversal
    strcpy(str_rev, str);

    // Reverse the string
    int len = strlen(str_rev);
    for (int start = 0, end = len - 1; start < end; start++, end--) {
        char temp = str_rev[start];
        str_rev[start] = str_rev[end];
        str_rev[end] = temp;
    }

    // Compare both strings
    if (strcmp(str, str_rev) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
