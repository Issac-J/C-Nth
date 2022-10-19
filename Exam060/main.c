#include <stdio.h>
#include <stdlib.h>

#define SKY "sky"

//  함수 원형 선언.
int My_strcmp(const char* string1, const char* string2);

//  문자열을 비교하는 함수 만들기: my_strcmp
int main()
{
    char string[100];           //  입력받는 문자열을 저장할 문자형 배열 변수를 선언.
    int ret;                    //  문자열을 비교하여 반환할 정수형 변수 선언.
    /*

    */

    printf("영단어를 입력한 후, Enter를 누르세요.\n");
    printf("sky를 입력하면 프로그램이 종료됩니다.\n");

    //  반복할 작업
    /*
        문자열을 계속해서 입력 받을 것이다. => gets() 함수 이용.
    */
    do {
        gets(string);
        /*
            gets() 함수를 이용하여, 문자형 배열 string에 저장한다.
        */

        ret = strcmp(string, SKY);
        /*
            strcmp 함수 : string과 SKY 두 문자열을 대소문자로 구분한다.
            strcmp 함수는  문자열을 아스키 값에 의해 문자 하나하나를 순차적으로 비교해나가며,
            모든 문자열이 일치할 경우, 0을 return
            string 문자열이 큰 경우, 1을 return
            string 문자열이 작은 경우, -1을 return
        */


        if(ret == 0) {
        /*
            모든 문자열이 일치할 경우, 0을 return
            즉, ret에는 0이 담겨 있다.
        */
            printf("%s == %s, ret = %d\n", string, SKY, ret);
            break;
            /*
                여기서 break 문은
                입력한 문자열이 sky인 경우이기 때문에 프로그램을 종료해야한다.
                break문을 사용하여 프로그램을 종료하고 while 반복문을 빠져나온다.
            */
        }
        else if(ret < 0)    printf("%s < %s, ret = %d\n", string, SKY, ret);
        /*
            ret가 -1 인 경우, string 문자열이 SKY보다 작을 때를 말한다.
        */
        else printf("%s > %s, ret = %d\n", string, SKY, ret);
        /*
            ret가 1 인 경우, string 문자열이 SKY보다 클 때를 말한다.
        */

    }   while(1);
    /*
        while문의 조건문이 1이라는 것은 do {... } 의 블록을 무한반복 실행한다는 의미이다.
    */
    return 0;
}

//  함수 선언부
int My_strcmp(const char* string1, const char* string2) {
    /*
        매개변수로 string1 주소값과 string2 주소값을 받는다.
    */

    if(*string1 == (int)NULL && *string2 == (int)NULL ) return 0;
    /*
        string1과 string2의 값이 모두 NULL 이면 0을 리턴한다.

        첫 문자가 NULL이라는 것은 문자가 없다는 것을 의미한다.
        그리고 0을 리턴한다는 것은 같음을 의미한다.

        => 즉, string1 문자열의 길이가 0이고 string2 문자열의 길이가 0은 같다는 뜻이다.
    */

    // string1의 첫 문자가 NULL이 아닌 경우 while 반복문을 반복한다.
    while(*string1 != (int)NULL) {

        if(*string2 == (int)NULL) return 1;
        /*
            string1은 NULL 아니며, string2 문자열이 NULL 인 경우, 1을 리턴한다.

            string2 문자열이 NULL이라는 것은
            더이상 비교할 string2 문자열이 없다는 의미다.
            (문자형 배열(문자열)에서 문자열은 마지막 뒤에 널문자('\0')가 숨어있다는 것을 생각해야 한다.
        */

        if(*string1 == *string2) {
            string1++;
            string2++;
            continue;
             /*
                string1이 가리키는 번지의 문자 값과 string2가 가리키는 번지의 문자 값이 같은 경으,
                다음 문자 비교를 위해 string1의 번지와 string2의 번지를 1씩 증가시킨다.

                continue 문을 이용하여, while 반복문을 계속 반복한다.
                continue 문을 만나면 while문의 조건을 다시 확인한다.
             */
        }

        if(*string1 < *string2) return -1;
        /*
            문자 값을 비교하여 string1이 작으면 -1을 리턴한다.
        */
        else return 1;
        /*
            문자 값을 비교하여 string1이 크면 1을 리턴한다.
        */
    }
    /*
        위 while 반복문은 string1이 가리키는 번지의 값이 NULL이 될 때까지 반복한다.
    */

    if(*string2 != (int)NULL) return -1;
    /*
        string1이 가리키는 번지의 값이 NULL이 될 때까지 비교하고 난 후,
        string2가 가리키는 번지의 값이 NULL 아니면, -1을 반환한다.
        (string2가 NULL이 아니라는 것은 string2의 문자열의 길이가 더 길다는 것을 의미한다.)
    */

    return 0;
    /*
        나머지의 경우 문자열이 일치되는 것이므로 0을 반환한다.
    */
}
