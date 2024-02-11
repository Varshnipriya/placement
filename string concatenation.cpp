#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int len1, len2;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    if (str1[len1 - 1] == str2[0]) {
        len1--;
    }
    strcpy(result, str1);
    strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    return 0;
}

