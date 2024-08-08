/*> 표준입력에서 double 로 주어진 지름이 있을 때, 이 원의 넓이를 출력하라.
> 
> 
> 1.원주율 Pi는 3.14로 계산하라.
> 
> 2.출력은 면적만 출력한다.
> 
> 3.주어진 것은 반지름이 아니고 지름임을 유의할 것.
>*/
#include <stdio.h>
int main(void) {
    int num;
    printf("지름을 입력하시오 : ");
    scanf("%d", &num);
    printf("원의 넓이 : %f", (num/2)*(num/2)*3.14);
    return 0;
}