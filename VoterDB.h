#include <string>
using namespace std;

void New(string &ln, string &fn, int &a, int &stnum, string &stnam, string &tn, string &zip, float &amtDon);
void Update(string &ln, string &fn, int &a, int &stnum, string &stnam, string &tn, string &zip);
void View(const string &ln, const string &fn, int a, int stnum, const string &stnam, const string &tn, const string &zip, float amtDon);
void Donate(float &amountDonated);
void Report(const string &lastName, float amountDonated);