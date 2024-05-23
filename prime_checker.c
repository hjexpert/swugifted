#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d는 소수입니다.\n", num);
    } else {
        printf("%d는 소수가 아닙니다.\n", num);
    }

    return 0;
}
