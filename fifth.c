/*#include <stdio.h>
int main(){
int total_seconds = 3361;

//아래에서 시 분 초를 계산하여 출력

return 0;
}*/
#include <stdio.h>
int main(void) {
    int hours;
    int minutes;
    int seconds;
    printf("초를 입력하시오 : ");
    scanf("%d", &seconds);
    hours = seconds/3600;
    minutes = (seconds-3600*hours)/60;
    seconds = seconds-(3600*hours+60*minutes);
    printf("시 : %d, 분 : %d, 초 : %d", hours, minutes, seconds);
    return 0;
    }