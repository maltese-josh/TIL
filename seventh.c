/*> 어느 교과목의 계정 번호는 1번 부터 99번 사이이며 번호 1에 해당하는 계정 이름은 ca01,  
2는 ca02, … 99는 ca99이다.
번호 하나를 입력하면 계정 이름을 출력하는 프로그램을 작성하라.
> 
> 
> 예:
> 
> 번호를 입력하세요: 5
> 
> 계정은  ca05
>*/
#include <stdio.h>
int main(void) {
    int num;
    printf("번호를 입력하세요 : ");
    scanf("%d", &num);
    printf("계정은 ca%02d", num);
    return 0;
}