#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string movie;
    getline(cin, movie);

    int total_tickets = 0;
    int student_tickets = 0;
    int standard_tickets = 0;
    int kid_tickets = 0;

    while (movie != "Finish") {
        int available_seats;
        cin >> available_seats;

        int purchased_student_tickets = 0;
        int purchased_standard_tickets = 0;
        int purchased_kid_tickets = 0;

        int total_purchased_tickets = 0;

        string ticket_type;
        cin >> ticket_type;

        while (ticket_type != "End") {
            total_purchased_tickets++;
            if (ticket_type == "student") {
                purchased_student_tickets++;
            } else if (ticket_type == "standard") {
                purchased_standard_tickets++;
            } else if (ticket_type == "kid") {
                purchased_kid_tickets++;
            }

            if (total_purchased_tickets >= available_seats) {
                break;
            }

            cin >> ticket_type;
        }

        double occupancy_percentage = (static_cast<double>(total_purchased_tickets) / available_seats) * 100;
        cout << movie << " - " << fixed << setprecision(2) << occupancy_percentage << "% full." << endl;

        student_tickets += purchased_student_tickets;
        standard_tickets += purchased_standard_tickets;
        kid_tickets += purchased_kid_tickets;
        total_tickets += total_purchased_tickets;
        cin.ignore();
        getline(cin, movie);
    }

    double student_percentage = (static_cast<double>(student_tickets) / total_tickets) * 100;
    double standard_percentage = (static_cast<double>(standard_tickets) / total_tickets) * 100;
    double kid_percentage = (static_cast<double>(kid_tickets) / total_tickets) * 100;

    cout << "Total tickets: " << total_tickets << endl;
    cout << student_percentage << "% student tickets." << endl;
    cout << standard_percentage << "% standard tickets." << endl;
    cout << kid_percentage << "% kids tickets." << endl;

    return 0;
}