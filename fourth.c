/*#include <stdio.h>
int main(){
int width; //폭
int heights; //높이

width = 23;
height = 11;

//아래에 사각형의 면적과 둘레 길이를 출력하는 코드를 작성하라.
//순서대로 면적과 둘레를 출력하되
//위의 width 값과 hieght 값만 바꾸면 다른 크기의 사각형도
//계산 할 수 있어야 한다.

return 0;
}*/
#include <stdio.h>
int main(void) {
    int width = 23;
    int heights = 11;
    printf("사각형의 면적 = %d\n", width*heights);
    printf("사각형의 둘레 = %d", 2*width+2*heights);
    return 0;
}