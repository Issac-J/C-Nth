#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIND_CHAR 'h'

//  문자열 중에서 특정 문자 검색하기: strchr()
int main()
{
    char string[100];
    char *ret;

    do {
        gets(string);

        ret = strchr(string, FIND_CHAR);

        if(ret == NULL) printf("문자열 중에는 해당 문자가 없습니다.\n");
        else {
            printf("index %d에서 %c문자를 찾았습니다.\n", ret-string, FIND_CHAR);
            break;
        }
    }   while(1);

    return 0;
}
