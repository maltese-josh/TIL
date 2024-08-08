/*실행 결과

첫 번째 계산할 값을 입력하세요 : 10
두 번째 계산할 값을 입력하세요 : 20
10.00 + 20.00 = 30.00
10.00 - 20.00 = -10.00
10.00 * 20.00 = 200.00
10.00 / 20.00 = 0.50
10 % 20 = 10*/
#include <stdio.h>
int main(void) {
    float x;
    float y;
    printf("첫 번째 계산할 갑을 입력하세요 : ");
    scanf("%f", &x);
    printf("두 번째 계산할 값을 입력하세요 : ");
    scanf("%f", &y);
    printf("%f + %f = %f\n", x, y, x+y);
    printf("%f - %f = %f\n", x, y, x-y);
    printf("%f * %f = %f\n", x, y, x*y);
    printf("%f / %f = %f\n", x, y, x/y);
    printf("%f % %f = %f\n", x, y, (x%y));
    return 0;
}