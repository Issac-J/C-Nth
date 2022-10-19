#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  문자열의 길이 구하기: strlen()
int main()
{
    char string[100];

    printf("문장을 입력한 후, Enter를 누르세요.\n");
    printf("아무 문장을 입력하지 않으면, 프로그램은 종료됩니다.\n");

    do {
        gets(string);

        if(strlen(string) == 0) {
            break;
        }
        printf("문자열의 길이: %d\n", strlen(string));

    } while(1);

    return 0;
}
