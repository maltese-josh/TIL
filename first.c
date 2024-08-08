/*정수를 입력하세요: 9999
10진수 : 9999
16진수 : 270F
8진수 : 23417*/
#include <stdio.h>
int main(void) {
    int num;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    printf("10진수 : %d\n", num);
    printf("16진수 : %X\n", num);
    printf("8진수 : %o\n", num);
    return 0;
}