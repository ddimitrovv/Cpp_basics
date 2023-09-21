#include <iostream>
using namespace std;

int main() {
    int current_book_pages, pages_per_hour, days_count;
    cin >> current_book_pages;
    cin >> pages_per_hour;
    cin >> days_count;
    int hours_per_day = (current_book_pages / pages_per_hour) / days_count;
    cout << hours_per_day << endl;
    return 0;
}
