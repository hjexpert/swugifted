#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min = 1, max = 100, guess, tries = 0;
    char response;

    srand(time(0)); // 난수 초기화

    printf("컴퓨터가 1부터 100 사이의 숫자를 맞추겠습니다.\n");

    do {
        guess = (min + max) / 2;
        tries++;
        printf("컴퓨터의 추측: %d\n", guess);
        printf("높으면 'h', 낮으면 'l', 맞으면 'c'를 입력하세요: ");
        scanf(" %c", &response);

        if (response == 'h') {
            max = guess - 1;
        } else if (response == 'l') {
            min = guess + 1;
        }
    } while (response != 'c');

    printf("컴퓨터가 %d번 만에 맞췄습니다!\n", tries);

    return 0;
}
