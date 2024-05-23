
// 배열 사용하기 (5개의 숫자 입력받아 출력하기)
#include <stdio.h>

int main() {
    int arr[5];
    int i;

    printf("5개의 숫자를 입력하세요:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("입력한 숫자:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
