/* 
    솔루션 / 프로젝트 / 소스파일: ch03 / Prj01 / 01comments.c
    C 프로그램의 기초를 다지기 위한 주석, 문장, 키워드 이해
    V 1.0
*/
#include <stdio.h>  // 문장이 아니라 세미콜론을 붙이지 않는다.

// 운영체제가 호출하는 함수, void로 매개변수 없음을 표시
int main(void)
{
    puts("3장 첫 C 프로그램!\n");  // 중요!!! 문장 뒤에는 세미콜론(;) 을 넣는것을 꼭 기억한다.

    printf("키워드: int void return 등\n");
    printf("식별자: main puts printf 등");

    return 0;
}
