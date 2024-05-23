#include <stdio.h>

int main() {
    int n, i;
    long long fib[50]; // 피보나치 수열을 저장할 배열 (최대 50개)

    printf("몇 번째 피보나치 수까지 계산할까요? ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("피보나치 수열:\n");
    for (i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }
    printf("\n");

    return 0;
}
