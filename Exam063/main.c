#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//  ���ڿ��� ���� ���ϱ�: strlen()
int main()
{
    char string[100];

    printf("������ �Է��� ��, Enter�� ��������.\n");
    printf("�ƹ� ������ �Է����� ������, ���α׷��� ����˴ϴ�.\n");

    do {
        gets(string);

        if(strlen(string) == 0) {
            break;
        }
        printf("���ڿ��� ����: %d\n", strlen(string));

    } while(1);

    return 0;
}
