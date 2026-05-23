#include <iostream>
#include <limits>

using namespace std;

const int MAX = 100;

// arrays to store ticket information
int ticketID[MAX];
string customerName[MAX];
string movieName[MAX];
string seatNumber[MAX];
float ticketPrice[MAX];

int totalTickets = 0;

// functions
void bookTicket();
void displayTickets();
void searchTicket();
void updateTicket();
void cancelTicket();
void generateReport();

int main() {

    int choice;

    do {

        cout << "\n===== cinema ticket booking system =====\n";
        cout << "1. book ticket\n";
        cout << "2. display tickets\n";
        cout << "3. search ticket\n";
        cout << "4. update ticket\n";
        cout << "5. cancel ticket\n";
        cout << "6. generate report\n";
        cout << "7. exit\n";
        cout << "enter choice: ";

        cin >> choice;

        // handles invalid input
        if(cin.fail()) {

            cin.clear();

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "please enter numbers only!\n";

            continue;
        }

        switch(choice) {

            case 1:
                bookTicket();
                break;

            case 2:
                displayTickets();
                break;

            case 3:
                searchTicket();
                break;

            case 4:
                updateTicket();
                break;

            case 5:
                cancelTicket();
                break;

            case 6:
                generateReport();
                break;

            case 7:
                cout << "\nprogram ended successfully.\n";
                break;

            default:
                cout << "\ninvalid choice!\n";
        }

    } while(choice != 7);

    return 0;
}

// function to book ticket
void bookTicket() {

    if(totalTickets >= MAX) {

        cout << "\nticket storage full!\n";

        return;
    }

    cout << "\n===== book ticket =====\n";

    cout << "enter ticket id: ";
    cin >> ticketID[totalTickets];

    cin.ignore();

    cout << "enter customer name: ";
    getline(cin, customerName[totalTickets]);

    cout << "enter movie name: ";
    getline(cin, movieName[totalTickets]);

    cout << "enter seat number: ";
    getline(cin, seatNumber[totalTickets]);

    cout << "enter ticket price: ";
    cin >> ticketPrice[totalTickets];

    totalTickets++;

    cout << "\nticket booked successfully!\n";
}

// function to display all tickets
void displayTickets() {

    if(totalTickets == 0) {

        cout << "\nno tickets found!\n";

        return;
    }

    cout << "\n===== ticket records =====\n";

    for(int i = 0; i < totalTickets; i++) {

        cout << "\nticket id: " << ticketID[i] << endl;
        cout << "customer name: " << customerName[i] << endl;
        cout << "movie name: " << movieName[i] << endl;
        cout << "seat number: " << seatNumber[i] << endl;
        cout << "ticket price: " << ticketPrice[i] << endl;
    }
}

// function to search ticket
void searchTicket() {

    int id;
    bool found = false;

    cout << "\nenter ticket id to search: ";
    cin >> id;

    for(int i = 0; i < totalTickets; i++) {

        if(ticketID[i] == id) {

            cout << "\n===== ticket found =====\n";

            cout << "ticket id: " << ticketID[i] << endl;
            cout << "customer name: " << customerName[i] << endl;
            cout << "movie name: " << movieName[i] << endl;
            cout << "seat number: " << seatNumber[i] << endl;
            cout << "ticket price: " << ticketPrice[i] << endl;

            found = true;

            break;
        }
    }

    if(found == false) {

        cout << "\nticket not found!\n";
    }
}

// function to update ticket
void updateTicket() {

    int id;
    bool found = false;

    cout << "\nenter ticket id to update: ";
    cin >> id;

    cin.ignore();

    for(int i = 0; i < totalTickets; i++) {

        if(ticketID[i] == id) {

            cout << "\n===== update ticket =====\n";

            cout << "enter new customer name: ";
            getline(cin, customerName[i]);

            cout << "enter new movie name: ";
            getline(cin, movieName[i]);

            cout << "enter new seat number: ";
            getline(cin, seatNumber[i]);

            cout << "enter new ticket price: ";
            cin >> ticketPrice[i];

            cout << "\nticket updated successfully!\n";

            found = true;

            break;
        }
    }

    if(found == false) {

        cout << "\nticket not found!\n";
    }
}

// function to cancel ticket
void cancelTicket() {

    int id;
    bool found = false;

    cout << "\nenter ticket id to cancel: ";
    cin >> id;

    for(int i = 0; i < totalTickets; i++) {

        if(ticketID[i] == id) {

            for(int j = i; j < totalTickets - 1; j++) {

                ticketID[j] = ticketID[j + 1];
                customerName[j] = customerName[j + 1];
                movieName[j] = movieName[j + 1];
                seatNumber[j] = seatNumber[j + 1];
                ticketPrice[j] = ticketPrice[j + 1];
            }

            totalTickets--;

            cout << "\nticket cancelled successfully!\n";

            found = true;

            break;
        }
    }

    if(found == false) {

        cout << "\nticket not found!\n";
    }
}

// function to generate report
void generateReport() {

    float totalRevenue = 0;

    for(int i = 0; i < totalTickets; i++) {

        totalRevenue += ticketPrice[i];
    }

    cout << "\n report\n";
    cout << "total tickets booked: " << totalTickets << endl;
    cout << "total revenue: " << totalRevenue << endl;
}