
// 조건문 사용하기 (짝수/홀수 판별)
#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d는 짝수입니다.\n", num);
    } else {
        printf("%d는 홀수입니다.\n", num);
    }

    return 0;
}
