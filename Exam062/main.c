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
        �Լ� ���� :  char* strcat(char* dest, const char* src);
        dest�� ù ��° ���ڿ��� ���� ������ ���̸�,
        src�� �� ��° ���ڿ��� ���� ������ ���̴�.

        ���ڿ��� dest ���ڿ��� �߰��Ǳ� ������ dest ���۴� src ���ڿ��� �߰��� ��ŭ�� ����� ���۰� �־�� �Ѵ�.
    */

    puts(str1);
//    printf("%s\n", str1);

    return 0;
}
