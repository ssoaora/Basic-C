#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

int main(void)
{
    int guess, input, chance = 7;

    srand((long)time(NULL));
    guess = rand() % MAX + 1;

    printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX);
    printf("기회는 최대 %d 번입니다.\n", chance);
    printf("이 정수는 무엇일까요? 입력해 보세요. : ");

    while (scanf("%d", &input))
    {
        if (chance == 1)
            break;

        if (input > guess)
        {
            printf("입력한 수 %d보다 작습니다. 다시 입력하세요. : ", input);
            chance--;
        }
        else if (input < guess)
        {
            printf("입력한 수 %d보다 큽니다. 다시 입력하세요. : ", input);
            chance--;
        }
        else
        {
            puts("정답입니다.");
            return 0;
        }
    }

    printf("모든 기회를 쓰셨습니다.\n");

    return 0;
}
