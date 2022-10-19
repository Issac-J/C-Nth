#include <stdio.h>
#include <stdlib.h>

#define SKY "sky"

//  �Լ� ���� ����.
int My_strcmp(const char* string1, const char* string2);

//  ���ڿ��� ���ϴ� �Լ� �����: my_strcmp
int main()
{
    char string[100];           //  �Է¹޴� ���ڿ��� ������ ������ �迭 ������ ����.
    int ret;                    //  ���ڿ��� ���Ͽ� ��ȯ�� ������ ���� ����.
    /*

    */

    printf("���ܾ �Է��� ��, Enter�� ��������.\n");
    printf("sky�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

    //  �ݺ��� �۾�
    /*
        ���ڿ��� ����ؼ� �Է� ���� ���̴�. => gets() �Լ� �̿�.
    */
    do {
        gets(string);
        /*
            gets() �Լ��� �̿��Ͽ�, ������ �迭 string�� �����Ѵ�.
        */

        ret = strcmp(string, SKY);
        /*
            strcmp �Լ� : string�� SKY �� ���ڿ��� ��ҹ��ڷ� �����Ѵ�.
            strcmp �Լ���  ���ڿ��� �ƽ�Ű ���� ���� ���� �ϳ��ϳ��� ���������� ���س�����,
            ��� ���ڿ��� ��ġ�� ���, 0�� return
            string ���ڿ��� ū ���, 1�� return
            string ���ڿ��� ���� ���, -1�� return
        */


        if(ret == 0) {
        /*
            ��� ���ڿ��� ��ġ�� ���, 0�� return
            ��, ret���� 0�� ��� �ִ�.
        */
            printf("%s == %s, ret = %d\n", string, SKY, ret);
            break;
            /*
                ���⼭ break ����
                �Է��� ���ڿ��� sky�� ����̱� ������ ���α׷��� �����ؾ��Ѵ�.
                break���� ����Ͽ� ���α׷��� �����ϰ� while �ݺ����� �������´�.
            */
        }
        else if(ret < 0)    printf("%s < %s, ret = %d\n", string, SKY, ret);
        /*
            ret�� -1 �� ���, string ���ڿ��� SKY���� ���� ���� ���Ѵ�.
        */
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
        /*
            ret�� 1 �� ���, string ���ڿ��� SKY���� Ŭ ���� ���Ѵ�.
        */

    }   while(1);
    /*
        while���� ���ǹ��� 1�̶�� ���� do {... } �� ����� ���ѹݺ� �����Ѵٴ� �ǹ��̴�.
    */
    return 0;
}

//  �Լ� �����
int My_strcmp(const char* string1, const char* string2) {
    /*
        �Ű������� string1 �ּҰ��� string2 �ּҰ��� �޴´�.
    */

    if(*string1 == (int)NULL && *string2 == (int)NULL ) return 0;
    /*
        string1�� string2�� ���� ��� NULL �̸� 0�� �����Ѵ�.

        ù ���ڰ� NULL�̶�� ���� ���ڰ� ���ٴ� ���� �ǹ��Ѵ�.
        �׸��� 0�� �����Ѵٴ� ���� ������ �ǹ��Ѵ�.

        => ��, string1 ���ڿ��� ���̰� 0�̰� string2 ���ڿ��� ���̰� 0�� ���ٴ� ���̴�.
    */

    // string1�� ù ���ڰ� NULL�� �ƴ� ��� while �ݺ����� �ݺ��Ѵ�.
    while(*string1 != (int)NULL) {

        if(*string2 == (int)NULL) return 1;
        /*
            string1�� NULL �ƴϸ�, string2 ���ڿ��� NULL �� ���, 1�� �����Ѵ�.

            string2 ���ڿ��� NULL�̶�� ����
            ���̻� ���� string2 ���ڿ��� ���ٴ� �ǹ̴�.
            (������ �迭(���ڿ�)���� ���ڿ��� ������ �ڿ� �ι���('\0')�� �����ִٴ� ���� �����ؾ� �Ѵ�.
        */

        if(*string1 == *string2) {
            string1++;
            string2++;
            continue;
             /*
                string1�� ����Ű�� ������ ���� ���� string2�� ����Ű�� ������ ���� ���� ���� ����,
                ���� ���� �񱳸� ���� string1�� ������ string2�� ������ 1�� ������Ų��.

                continue ���� �̿��Ͽ�, while �ݺ����� ��� �ݺ��Ѵ�.
                continue ���� ������ while���� ������ �ٽ� Ȯ���Ѵ�.
             */
        }

        if(*string1 < *string2) return -1;
        /*
            ���� ���� ���Ͽ� string1�� ������ -1�� �����Ѵ�.
        */
        else return 1;
        /*
            ���� ���� ���Ͽ� string1�� ũ�� 1�� �����Ѵ�.
        */
    }
    /*
        �� while �ݺ����� string1�� ����Ű�� ������ ���� NULL�� �� ������ �ݺ��Ѵ�.
    */

    if(*string2 != (int)NULL) return -1;
    /*
        string1�� ����Ű�� ������ ���� NULL�� �� ������ ���ϰ� �� ��,
        string2�� ����Ű�� ������ ���� NULL �ƴϸ�, -1�� ��ȯ�Ѵ�.
        (string2�� NULL�� �ƴ϶�� ���� string2�� ���ڿ��� ���̰� �� ��ٴ� ���� �ǹ��Ѵ�.)
    */

    return 0;
    /*
        �������� ��� ���ڿ��� ��ġ�Ǵ� ���̹Ƿ� 0�� ��ȯ�Ѵ�.
    */
}
