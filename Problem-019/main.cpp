#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int countFirstOfMonthSundays() {
    int sundaysCount = 0;

    // Start date: 1st January 1901
    auto current_date = year_month_day{year{1901}, month{1}, day{1}};
    auto end_date = year_month_day{year{2000}, month{12}, day{31}};

    while (current_date <= end_date) {
        auto weekday = weekday{sys_days{current_date}}; // Get the weekday for the current date

        if (weekday == weekday::Sunday) {
            sundaysCount++;
        }

        // Move to the first day of the next month
        if (current_date.month() == 12) {
            current_date = year_month_day{year{current_date.year() + 1}, month{1}, day{1}};
        } else {
            current_date = year_month_day{current_date.year(), month{current_date.month() + 1}, day{1}};
        }
    }

    return sundaysCount;
}

int main() {
    int sundaysCount = countFirstOfMonthSundays();

    cout << "Number of Sundays that fell on the first of the month during the 20th century: " << sundaysCount << endl;

    return 0;
}
