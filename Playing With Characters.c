#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);

    char s[100];
    scanf("%s", &s);
    printf("%s\n", s);

    scanf("\n");

    char sen[100];
    scanf("%[^\n]%*c", &sen);
    printf("%s\n", sen);

    return 0;
}
