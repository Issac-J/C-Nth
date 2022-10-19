#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SKY "sky"

//  문자열 검색하기: strstr
int main()
{
    char string[100];
    char *ret;

    printf("문자열을 입력한 후, Enter를 누르세요\n");
    printf("문자열 중에 sky가 포함되어 있으면 프로그램은 종료됩니다.\n");

    do {
        gets(string);
        //  문자열 입력 받기(반복)

        ret = strstr(string, SKY);
        /*
            strstr 함수 원형
            char* strstr(const char* string, const char* strCharSet);

            strstr() 함수는 입력된 문자열 중에 "sky"가 있는지 검색합니다.
            반환하는 값은
            "sky" 문자열을 찾으면, 그 찾은 위치에 대한 메모리 번지 값을 반환하며, 찾지 못했으면 NULL 포인터를 반환한다.
        */

        if(ret == NULL) {
            puts("문자열 중에 sky가 없습니다.\n");
        }
        else {
            printf("%d 위치에서 sky 문자열을 찾았습니다.\n", ret - string);
            /*
                else: 문자열 중에서 해당 문자열(ex. "sky")이 검색된 경우
                찾은 위치의 메모리 번지를 반환한다.
                반환값인 메모리 번지는 항상 메모리 배열 변수 string이 가리키는 번지보다 크거나 같다.

                그렇기 때문에
                몇 번째 위치에서 검색되었는지는 검색된 번지(ret), 문자열의 시작번지(string)을 이용하여 ret - string으로 구할 수 있다.
            */

            break;
            /*
                while문을 빠져나온 후 프로그램을 종료시킨다.
            */
        }
    }   while(1);

    return 0;
}
