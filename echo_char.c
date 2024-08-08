#include <stdio.h>
int main(void) {
    char c;

    printf("문자를 입력하세요: ");
    while ((scanf("%c", &c)) != EOF) {
        printf("%c", c);
    }

    return 0;
}