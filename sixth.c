/*##교환할 돈은 ? 7777

오백 원짜리 : 15개
백 원짜리 : 2개
오십 원짜리 : 1개
십 원짜리 : 2개
바꾸지 못한 잔돈 : 7원*/
#include <stdio.h>
int main(void) {
    int money;
    int x;
    int y;
    int z;
    int k;
    printf("교환할 돈은? : ");
    scanf("%d", &money);
    x=money/500;
    y=(money-x*500)/50;
    z=(money-x*500-y*50)/10;
    k=(money-x*500-y*50-z*10);
    printf("오백 원짜리 : %d\n", x);
    printf("오십 원짜리 : %d\n", y);
    printf("십 원짜리 : %d\n", z);
    printf("바꾸지 못한 잔돈 : %d", k);
    return 0;
}