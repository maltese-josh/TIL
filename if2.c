#include <stdio.h>

int main(void) {

    double income;
    double family;
    double creditCard;
    double medicalExpense;
    double contribution;
    double total;
    double tax;
    double creditCardDeduction;
    double medicalExpenseDeduction;

    printf("올해의 소득을 입력하세요(만단위) : ");
    scanf("%lf", &income);
    
    printf("부양 가족 수를 입력하세요 : ");
    scanf("%lf", &family);

    printf("신용카드 사용액을 입력하세요(만단위) : ");
    scanf("%lf", &creditCard);

    printf("의료비 지출액을 입력하세요(만단위) : ");
    scanf("%lf", &medicalExpense);

    printf("기부금을 입력하세요 : ");
    scanf("%lf", &contribution);

    total = income;

    total -= family * 100;
    printf("가족 공제액 : %lf\n", family * 100 * 10000);

    if (creditCard > 1000) {
        creditCardDeduction = (creditCard - 1000) * 1 / 10;
        total -= creditCardDeduction;
        printf("신용카드 공제액 : %lf\n", creditCardDeduction * 10000);
    } else {
        printf("신용카드 공제액 : 0\n");
    }

    if (medicalExpense > income * 5 / 100) {
        medicalExpenseDeduction = medicalExpense;
        total -= medicalExpenseDeduction;
        printf("의료비 공제액 : %lf\n", medicalExpenseDeduction * 10000);
    } else {
        printf("의료비 공제액 : 0\n");
    }

    total -= contribution;
    printf("기부금 공제액 : %lf\n", contribution * 10000);

    if (total <= 1000) {
        tax = total * 1 / 100;
    } else if (total > 1000, total <= 2000) {
        tax = 1000 * 1 / 100;
        tax += (total - 1000) * 3 / 100;
    } else if (total > 2000 , total <= 3000) {
        tax = 1000 * 1 / 100;
        tax += 1000 * 3 /100;
        tax += (total - 2000) * 1 / 10 ;
    } else {
        tax = 1000 * 1 /100;
        tax += 1000 * 3 / 100;
        tax += 1000 * 1 / 10;
        tax += (total - 3000) * 1 / 5;
    }

    creditCardDeduction *= 10000;
    medicalExpenseDeduction *= 10000;
    contribution *= 10000;
    total *= 10000;
    tax *= 10000;

    printf("총 공제액 : %lf\n", family * 100 * 10000 + creditCardDeduction + medicalExpenseDeduction + contribution);
    printf("과세 대상 소득액 : %lf\n", total);
    printf("총 세금액 : %lf\n", tax);

    return 0;
}