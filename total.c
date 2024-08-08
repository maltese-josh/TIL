#include <stdio.h>
void SumToN (int i) {
    int sum = 0;
    if(i < 0) {
        sum = 0;
    }else {
        for (int b = 1; b <= i; b++) {
        printf("%d",b);
        sum += b;
        }
    }
    printf("1부터 %d까지의 합은 %d입니다.", i, sum);
}
int main(void) {
    int i;
    printf("i를 입력하시오: ");
    scanf("%d", &i);
    SumToN(i);
    return 0;
}
