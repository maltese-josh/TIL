# TIL
### 문제: 항공권 구입 금액 계산 프로그램

항공권의 가격은 비행 거리(마일)에 따라 결정됩니다. MJ 항공은 단골 고객에게 항공권 구입 시 실제 비행 거리에서 일정 거리를 차감하는 혜택을 제공합니다. 또한, 차감 후 남은 거리에 따라 차등 요금을 적용하는 구간별 누진 요금제를 운영합니다.

- **차감의 개념:** 1000마일 거리의 항공권을 구매할 때, 100마일을 차감하면 900마일에 대해서만 요금을 지불합니다.

### 계산 방식:

1. **마일리지 포인트 차감:**
    - 마일리지 포인트는 유료로 비행한 거리에 대해 적립된 포인트입니다.
    - 포인트가 10,000 이상인 경우, 이번 비행 거리에서 그의 10%를 차감합니다. (예: 12,000 마일 실적이 있는 경우, 1,200마일 차감)
    - 차감되는 마일리지는 여행 거리를 초과할 수 없습니다.
    - 마일리지의 적용은 자동으로 이루어집니다.
2. **신용카드 실적 차감:**
    - 전달의 신용카드 사용 실적 30만원 초과분에 대해 차감이 적용됩니다.
    - 30만원 초과 70만원 이하인 경우, 1만원당 1마일 차감.
    - 70만원 초과인 경우, 1만원당 2마일 차감.
    - 마일리지 포인트로 인하여 항공권 비용이 전액 커버된 경우, 신용카드 실적은 적용되지 않습니다.
3. **요금 계산:**
    - 1000마일 이내: 기본요금 5만원 + 마일 당 200원
    - 1000마일 초과 ~ 2000마일 이내: 마일 당 180원
    - 2000마일 초과: 마일 당 150원
    - 최종 가격에는 10% 부가세가 추가됩니다.
4. **마일리지 포인트 재산정:**
    - 잔여 마일리지 포인트를 계산하고, 신규로 여행한 거리를 더해줍니다.
    - 무료로 여행한 거리는 마일리지 실적으로 누적되지 않습니다.

### 입력 데이터:

- 이번 구입할 항공권의 비행 거리
- 이전 여행 실적(마일리지)
- 제휴 신용 카드 사용 실적 (원 단위)

### 출력할 데이터:

1. 포인트로 차감된 마일 수
2. 신용카드로 차감된 마일 수
3. 돈을 지불해야 하는 총 거리(마일)
4. 항공권 가격 (세금 포함한 가격)
5. 잔여 마일리지 실적
6. 잔여 전월 신용카드 실적

```
#include <stdio.h>
int main(void) {
    int distance, mileage, cardSpending;
    int mileageDeduction, cardSpendingDeduction;
    int remainDistance;
    int userCardSpending;

    printf("비행 거리, 마일리지 실적, 신용카드 실적을 입력하시오: ");
    scanf("%d, %d, %d", &distance, & mileage, &cardSpending);

    if (mileage > 10000 && mileage/100 <= distance) {
        mileageDeduction = mileage / 100;
    } else if (mileage/100 > distance) {
        mileageDeduction = distance;
    } else {
        mileageDeduction = 0;
    }

    remainDistance = distance - mileageDeduction;

    if (remainDistance > 0) {
        if (cardSpending > 300000 && cardSpending <= 700000) {
            userCardSpending = cardSpending - 300000;
            cardSpendingDeduction = userCardSpending / 10000;
        } else if (cardSpending > 700000) {
            userCardSpending = cardSpending - 300000;
            cardSpendingDeduction = (400000 / 10000) + (userCardSpending - 400000) / 5000;
        } else {
            cardSpendingDeduction = 0;
        }
    }else {
        cardSpendingDeduction = 0;
    }

}
```
