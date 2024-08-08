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