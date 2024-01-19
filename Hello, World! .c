#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    char s[100];
    fgets(s, sizeof(s), stdin);
    printf("%s", s);
    return 0;
}
