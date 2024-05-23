#include <stdio.h>

int main() {
    int n, i, max;
    int arr[100];

    printf("배열의 크기를 입력하세요 (최대 100): ");
    scanf("%d", &n);

    printf("%d개의 숫자를 입력하세요:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("배열의 최대값: %d\n", max);

    return 0;
}
