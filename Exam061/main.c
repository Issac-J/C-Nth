#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SKY "sky"

int main()
{
    char string[100];
    int ret;

    printf("���ܾ �Է��� ��, Enter Ű�� ��������\n");
    printf("sky�� �����ϴ� �ܾ �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

    do {
        // ���ڿ��� �Է¹���
        gets(string);

        ret = strncmp(string, SKY, 3);
        /*
            strncmp �Լ��� �� ���� ���ڿ��� �Ѱ��� ������ �Ű������� �޴´�.

            ���ڿ��� 3����Ʈ ��ŭ ���Ѵ�.
            �κ� ���ڿ��� ��ġ�� ���, 0�� ��ȯ�ϸ�, string ���ڿ��� ū ��쿡�� 1, ������쿡�� -1�� ��ȯ�Ѵ�.
        */

        // ret�� 0�� ���,
        if(ret == 0) {
            printf("%3.3s == %s, ret = %d\n", string, SKY, ret);
            break;
        }
        // ret�� -1�� ���,
        else if(ret < 0) printf("%s < %s, ret = %d\n", string, SKY, ret);

        // ret �� 1�� ���,
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
    } while(1);

    return 0;
}
