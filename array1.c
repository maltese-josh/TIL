/**최대 100명이 수강할 수 있는 과목의 성적 처리 프로그램을 초기 버전을 작성하려고 한다.
실제 학생 수는 프로그램할 당시에는 알 수 없다.
성적은 배열 score[100]에 scanf로 입력한다.
정상 입력된 수의 개수가 바로 학생의 수이다.
( n = scanf( .. ); 하고 n값이 1이면 입력 성공)
총 학생 수를 출력하고 입력된 성적을 뒤에서 앞으로
(입력된 순서의 역순으로) 출력한다.**

- **정상 입력되면 계속하고 입력 실패하면 그 때까지 입력한 개수가 학생 수가 된다.
** 100명은 넘지 않는다고 가정한다.**/


#include <stdio.h>
int main(void) {
    int score[100];
    int people;
    int i = 0;
    int count = 0;
    while (1) {
        printf("점수를 입력하세요: ");
        if(scanf("%d", &people) == 1) {
            score[i++] = people;
            count += 1;
        }else {
            break;
        }
    }
    i--;
    printf("총 학생 수: %d\n", count);
    for(; i >= 0; i--) {
        printf("입력된 성적(역순): %d\n", score[i]);
    }
}