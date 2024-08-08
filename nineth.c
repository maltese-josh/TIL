/*4개의 정수를 읽어 들이면서 그 때마다 지금까지 읽은 수(들)의 곱을 출력한다. 
(4회의 출력 필요, for문으로 만들 수 있으면 for loop 이용하기.)
계산할 때는 복합배정 연산 "*="을 사용한다.
주의: 변수의 초기화*/
#include <stdio.h>
int main(void) {
    int x;
    int y;
    int z;
    int k;
    printf("첫번째 정수 : ");
    scanf("%d", &x);
    printf("곱 = %d\n", x);
    printf("두번째 정수 : ");
    scanf("%d", &y);
    x*=y;
    printf("곱 = %d\n", x);
    printf("세번째 정수 : ");
    scanf("%d", &z);
    x*=z;
    printf("곱 = %d\n", x);
    printf("네번째 정수 : ");
    scanf("%d", &k);
    x*=k;
    printf("곱 = %d", x);
    return 0;
}