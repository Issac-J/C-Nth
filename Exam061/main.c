#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SKY "sky"

int main()
{
    char string[100];
    int ret;

    printf("영단어를 입력한 후, Enter 키를 누르세요\n");
    printf("sky로 시작하는 단어를 입력하면 프로그램이 종료됩니다.\n");

    do {
        // 문자열을 입력받음
        gets(string);

        ret = strncmp(string, SKY, 3);
        /*
            strncmp 함수는 두 개의 문자열과 한개의 정수를 매개변수로 받는다.

            문자열을 3바이트 만큼 비교한다.
            부분 문자열이 일치할 경우, 0을 반환하며, string 문자열이 큰 경우에는 1, 작은경우에는 -1을 반환한다.
        */

        // ret이 0인 경우,
        if(ret == 0) {
            printf("%3.3s == %s, ret = %d\n", string, SKY, ret);
            break;
        }
        // ret이 -1인 경우,
        else if(ret < 0) printf("%s < %s, ret = %d\n", string, SKY, ret);

        // ret 이 1인 경우,
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
    } while(1);

    return 0;
}
