#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;

    printf("문자열을 입력하세요: ");
    scanf("%s", str);

    len = strlen(str);

    printf("역순 문자열: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
