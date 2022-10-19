#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* str;

    char str1[100];
    char str2[100];

    printf("Input First Word: ");
    gets(str1);

    printf("Input Second Word: ");
    gets(str2);

    strcat(str1, str2);
    /*
        함수 원형 :  char* strcat(char* dest, const char* src);
        dest는 첫 번째 문자열에 대한 포인터 값이며,
        src는 두 번째 문자열에 대한 포인터 값이다.

        문자열은 dest 문자열에 추가되기 때문에 dest 버퍼는 src 문자열을 추가할 만큼의 충분한 버퍼가 있어야 한다.
    */

    puts(str1);
//    printf("%s\n", str1);

    return 0;
}
