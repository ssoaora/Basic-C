#include <stdio.h>
/*
#include 는 명령어 번역하기 전 할 일, stdio 는 표준 입출력, .h 는 헤더파일
<> 는 컴파일러에게 지정된 위치에서 stdio.h 라는 파일을 가져와 소스코드에 포함시키는 것이다.
따라서 #include 는 preprocessor 즉 전처리기 라 한다.
*/

int main()
/*
main 함수에 인수가 없는 상태, 반환되는 값의 타입이 int 이다.
함수의 원형(prototype) 이라 부른다.
main 이름의 함수는 반드시 존재해야 한다.
main 함수는 하나만 존재해야 한다.
*/

{  // 블럭 시작, 안에 문장(statement) 입력
    
    printf("Hello World!");
    /*
    stdio.h 파일 안에 선언 되어있는 함수 호출
    printf 는 형식이 있는 출력
    C언어에서 "" 는 문자열, ''는 문자이다.
    문장이 종료되면 반드시 세미콜론을 넣어줘서 끝내야 한다.
    */

    return 0;
    
}  // 블럭 끝

/*
C언어 구조: 전처리기, 함수(function)
y=f(x), x=인수, y=반환값
따라서 값을 반환할 때 쓰이는 명령을 반환(return) 이라 한다.
*/
