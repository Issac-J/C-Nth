#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FIND_CHAR 'h'

//  ���ڿ� �߿��� Ư�� ���� �˻��ϱ�: strchr()
int main()
{
    char string[100];
    char *ret;

    do {
        gets(string);

        ret = strchr(string, FIND_CHAR);

        if(ret == NULL) printf("���ڿ� �߿��� �ش� ���ڰ� �����ϴ�.\n");
        else {
            printf("index %d���� %c���ڸ� ã�ҽ��ϴ�.\n", ret-string, FIND_CHAR);
            break;
        }
    }   while(1);

    return 0;
}
