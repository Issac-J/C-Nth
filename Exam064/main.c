#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SKY "sky"

//  ���ڿ� �˻��ϱ�: strstr
int main()
{
    char string[100];
    char *ret;

    printf("���ڿ��� �Է��� ��, Enter�� ��������\n");
    printf("���ڿ� �߿� sky�� ���ԵǾ� ������ ���α׷��� ����˴ϴ�.\n");

    do {
        gets(string);
        //  ���ڿ� �Է� �ޱ�(�ݺ�)

        ret = strstr(string, SKY);
        /*
            strstr �Լ� ����
            char* strstr(const char* string, const char* strCharSet);

            strstr() �Լ��� �Էµ� ���ڿ� �߿� "sky"�� �ִ��� �˻��մϴ�.
            ��ȯ�ϴ� ����
            "sky" ���ڿ��� ã����, �� ã�� ��ġ�� ���� �޸� ���� ���� ��ȯ�ϸ�, ã�� �������� NULL �����͸� ��ȯ�Ѵ�.
        */

        if(ret == NULL) {
            puts("���ڿ� �߿� sky�� �����ϴ�.\n");
        }
        else {
            printf("%d ��ġ���� sky ���ڿ��� ã�ҽ��ϴ�.\n", ret - string);
            /*
                else: ���ڿ� �߿��� �ش� ���ڿ�(ex. "sky")�� �˻��� ���
                ã�� ��ġ�� �޸� ������ ��ȯ�Ѵ�.
                ��ȯ���� �޸� ������ �׻� �޸� �迭 ���� string�� ����Ű�� �������� ũ�ų� ����.

                �׷��� ������
                �� ��° ��ġ���� �˻��Ǿ������� �˻��� ����(ret), ���ڿ��� ���۹���(string)�� �̿��Ͽ� ret - string���� ���� �� �ִ�.
            */

            break;
            /*
                while���� �������� �� ���α׷��� �����Ų��.
            */
        }
    }   while(1);

    return 0;
}
