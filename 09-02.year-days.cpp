#include <iostream>

int getYearDays(int year) {
  int days = 0;
  static int days_31_month[] = { 1,3,5,7,8,10,12 };
  static int days_30_month[] = { 4, 6, 9, 11 };
  static int other_month_days;
  days += (sizeof(days_31_month)/sizeof(days_31_month[0])) * 31;
  days += (sizeof(days_30_month)/sizeof(days_30_month[0])) * 30;
  // 判断闰年； 整百年，被400整除是闰年; 非整百年，被4整除是闰年
  if ((year % 100 == 0 && year % 400 == 0) || year % 4 == 0) { 
    days += 29;
  } else {
    days += 28;
  }
  return days;
}
int main() {
  while(true) {
    int year;
    int days;
    std::cin >> year;
    if(year == 0) {
      break;
    }
    days = getYearDays(year);
    std::cout << days << std::endl;
  }
  return 0;
}