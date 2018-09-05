#include <iostream>
#include <string>
#include "VoterDB.h"
using namespace std;

int main() {

    string lastName = "";
    string firstName = "";
    int age = 0;
    int streetNumber = 0;
    string streetName = "";
    string town = "";
    string zipCode = "";
    float amountDonated = 0;

    bool quit = false;
    string selection;

    while (quit != true) {
        cout << "Type New, Update, View, Donate, Report, or Quit: ";
        cin >> selection;

        if (selection == "New") New(lastName, firstName, age, streetNumber, streetName, town, zipCode, amountDonated);
        else if (selection == "Update") Update(lastName, firstName, age, streetNumber, streetName, town, zipCode);
        else if (selection == "View") View(lastName, firstName, age, streetNumber, streetName, town, zipCode, amountDonated);
        else if (selection == "Donate") Donate(amountDonated);
        else if (selection == "Report") Report(lastName, amountDonated);
        else if (selection == "Quit") quit = true;
        else cout << "Invalid command. Try again" << endl;
    }
}
