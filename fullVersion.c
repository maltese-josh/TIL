#include <stdio.h>

//윤년인지 확인하는 함수
int isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}

//해당 월의 일수를 반환하는 함수
int getDaysOfMonth(int year, int month) {
	int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2 && isLeapYear(year)) {
        return 29;
    }
    return daysOfMonth[month];
}

//1900년 1월 1일부터 해당 연도의 이전 연도까지의 총 일수를 계산하는 함수
int getTotalDaysUntilYear(int year) {
    int days = 0;
    for(int i = 1900; i <= year; i++) {
        days += getDaysOfMonth(i);
    }
    return days;
	
}

//해당 연도의 1월 1일부터 입력된 월의 이전 월까지의 총 일수를 계산하는 함수
int getTotalDaysUntilMonth(int year, int month) {
    getDaysOfMonth(year, month-1);
}

int main() {
	int year, month;
	printf("년 월을 입력하세요: ");
	scanf("%d %d", &year, &month);

	//총 일수 계산
	int totalDays = ;
	int startDay = ; // 1900년 1월 1일은 월요일이므로 +1을 해준다.

	printf("\n일\t월\t화\t수\t목\t금\t토\n");

	//시작 요일 전까지 *로 채우기
	for (int i = 0; i < ; i++)
	{
		printf("*\t");
	}

	int daysOfMonth = ;
	for (int day = 1; day <= ; day++)
	{
		printf("%2d\t", );
		// 토요일 다음에 줄바꿈 처리
		if ()
		{
			printf("\n");
		}
	}

	// 마지막 날 이후 '*' 출력
	int endSpaces = ;
	for (int i = 0; i < ; i++)
	{
		printf("*\t");
	}

	printf("\n");
	return 0;
}