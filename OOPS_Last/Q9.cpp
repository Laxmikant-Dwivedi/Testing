#include <stdio.h>
int findSubstring(char *str, char *substring);


int findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    while ((str[j] != '\0')||(substr[i] != '\0')) {
        if (substr[i] != str[j]) {
            j++;
            i = 0;
        }
        else {
            i++;
            j++;
        }
    }
    if (substr[i] == '\0')
        return 1;
    else
        return -1;
}

    int main()
    { 
    char str[40], substr[40];
    printf("Enter the string: ");
    gets(str);
    printf("Enter the substring: ");
    gets(substr);
    printf("findSubstring(): %d\n", findSubstring(str, substr));
    return 0;
}