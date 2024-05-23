
// 함수 사용하기 (두 숫자의 합 계산)
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);

    sum = add(num1, num2);

    printf("두 숫자의 합: %d\n", sum);

    return 0;
}
