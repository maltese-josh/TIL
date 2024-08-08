# TIL
### 프로그램 개요:

1. 사용자로부터 올해의 소득, 부양 가족 수, 신용카드 사용액, 의료비 지출, 기부금을 입력받습니다.
2. 공제 가능한 금액을 계산합니다.
3. 과세 대상 소득을 계산합니다.
4. 누진세율을 적용해 세금을 계산합니다.
5. 각 항목별 공제액, 총 공제액, 과세 대상 소득액, 총 세금액을 출력합니다.

### 용어 정의:

- 과세 대상 소득: 총 수입에서 공제액을 뺀 액수.
- 세액: 과세 대상 소득에 세율을 적용한 세금 액수.

### 입력 데이터:

- 올해의 소득
- 부양 가족 수
- 신용카드 사용액
- 의료비 지출
- 기부금
- **주의**: 입력은 만 단위 정수로 진행하되, 계산과 출력은 원 단위로 합니다.

### 공제 내역:

1. **가족 공제**: 본인 포함 부양 가족 1인당 100만원.
2. **신용카드 공제**: 사용액이 1000만원을 초과하는 경우 초과 분의 10% 공제.
3. **의료비 공제**: 수입의 5%를 초과하는 경우 의료비 전액 공제.
4. **기부금 공제**: 기부금 전액 공제.

### 누진세율:

- 1000만원 이하: 1%
- 1000만원 초과 ~ 2000만원 이하: 3%
- 2000만원 초과 ~ 3000만원 이하: 10%
- 3000만원 초과: 20%

### 출력 내용:

- 가족 공제액
- 신용카드 공제액
- 의료비 공제액
- 기부금 공제액
- 총 공제액
- 과세 대상 소득액
- 총 세금액
```
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
```
