/*#include <stdio.h>
int main(){
int hours = 1;
int minutes = 14;
int seconds = 33;

//위 세 변수를 이용하여 총 초 수를 계산 출력한다.
//필요한 변수도 선언한다.

return 0;
}*/
#include <stdio.h>
int main(void) {
    int hours = 1;
    int minutes = 14;
    int seconds = 33;
    printf("총 초 수 = %d", hours*3600+minutes*60+seconds);
    return 0;
}