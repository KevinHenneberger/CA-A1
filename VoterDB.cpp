#include <iostream>
#include <string>
#include <iomanip>
#include "VoterDB.h"
using namespace std;

/* 
 * Type “New” to add all new voter information (name, address, etc.) and to zero out the Amount
Donated. This option should allow the user to overwrite the previous information, not really create a
new additional account. So your program should hold one set of account information at a time. (The
next assignment will build on this one to make the program more functional).
*/
void New(string &ln, string &fn, int &a, int &stnum, string &stnam, string &tn, string &zip, float &amtDon) {
    cout << "Last Name: ";
    cin >> ln;
    cout << "First Name: ";
    cin >> fn;  
    cout << "Age: ";
    cin >> a; 
    cout << "Street Number: "; 
    cin >> stnum;
    cout << "Street Name: ";
    cin >> stnam; 
    cout << "Town: ";
    cin >> tn;
    cout << "Zipcode ";
    cin >> zip;  
    amtDon = 0;
}

/*
 * Type “Update” to change some or all of the voter information. Please simply prompt the user for all
new information, for each item associated with the account, other than the amount donated, which
should be unchanged after the update.
*/
void Update(string &ln, string &fn, int &a, int &stnum, string &stnam, string &tn, string &zip) {
    cout << "Last Name: ";
    cin >> ln;
    cout << "First Name: ";
    cin >> fn;  
    cout << "Age: ";
    cin >> a; 
    cout << "Street Number: "; 
    cin >> stnum;
    cout << "Street Name: ";
    cin >> stnam; 
    cout << "Town: ";
    cin >> tn;
    cout << "Zipcode ";
    cin >> zip;   
}

/*
 * Type “View” to see all account information in well-formatted output matching the sample executable
solution that we will give you later this week.
*/
void View(const string &ln, const string &fn, int a, int stnum, const string &stnam, const string &tn, const string &zip, float amtDon) {
    cout << ln << ", " << fn << ", " << a << ", " << stnum << ", " << stnam << ", " << tn << ", " << zip << ", " << amtDon << endl; 
}

/*
 * Type “Donate” to donate money to the campaign. The user should be prompted for an amount to add
to the Amount Donated so far.
*/
void Donate(float &amtDon) {
    float amt;
    cout << "How much would you like to donate? ";
    cin >> amt;  
    amtDon += amt; 
}

/*
 * Type “Report” to display the last name followed by the current balance (formatted with a dollar sign
and exactly two decimal places of accuracy) on the same line of output, as follows (for example): Lewis $100.45
*/
void Report(const string &ln, float amtDon) {
    cout << ln << " $" << fixed << setprecision(2) << amtDon << endl;
}
