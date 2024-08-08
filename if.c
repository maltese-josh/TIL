#include <stdio.h>

int main(void) {

    int income;
    int family;
    int creditCard;
    int medicalExpense;
    int contribution;
    int total;
    int tax;
    int creditCardDeduction;
    int medicalExpenseDeduction;

    printf("올해의 소득을 입력하세요(만단위) : ");
    scanf("%d", &income);
    
    printf("부양 가족 수를 입력하세요 : ");
    scanf("%d", &family);

    printf("신용카드 사용액을 입력하세요(만단위) : ");
    scanf("%d", &creditCard);

    printf("의료비 지출액을 입력하세요(만단위) : ");
    scanf("%d", &medicalExpense);

    printf("기부금을 입력하세요 : ");
    scanf("%d", &contribution);

    income *= 10000;
    creditCard *= 10000;
    medicalExpense *= 10000;
    contribution *= 10000;
    
    total = income;
    
    total -= family * 100 * 10000;
    printf("가족 공제액 : %d\n", family * 100 * 10000);

    if (creditCard > 1000 * 10000) {
        creditCardDeduction = (creditCard - 1000 * 10000) * 1 / 10;
        total -= creditCardDeduction;
        printf("신용카드 공제액 : %d\n", creditCardDeduction);
    } else {
        printf("신용카드 공제액 : 0\n");
    }

    if (medicalExpense > income * 5 / 100) {
        medicalExpenseDeduction = medicalExpense;
        total -= medicalExpenseDeduction;
       printf("의료비 공제액 : %d\n", medicalExpenseDeduction);
    } else {
        printf("의료비 공제액 : 0\n");
    }

    total -= contribution;
    printf("기부금 공제액 : %d\n", contribution);

    if (total <= 1000 * 10000) {
        tax = total * 1 / 100;
    } else if (total > 1000 * 10000 , total <= 2000 * 10000) {
        tax = (1000 * 10000) * 1 / 100;
        tax += (total - 1000 * 10000) * 3 / 100;
    } else if (total > 2000 * 10000 , total <= 3000 * 10000) {
        tax = (1000 * 10000) * 1 / 100;
        tax += (1000 * 10000) * 3 /100;
        tax += (total - 2000 * 10000) * 1 / 10 ;
    } else {
        tax = (1000 * 10000) * 1 /100;
        tax += (1000 * 10000) * 3 / 100;
        tax += (1000 * 10000) * 1 / 10;
        tax += (total - 3000 * 10000) * 1 / 5;
    }
    printf("총 공제액 : %d\n", family * 100 * 10000 + creditCardDeduction + medicalExpenseDeduction + contribution);
    printf("과세 대상 소득액 : %d\n", total);
    printf("총 세금액 : %d\n", tax);

    return 0;
}