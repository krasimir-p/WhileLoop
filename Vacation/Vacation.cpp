#include <iostream>

using namespace std;

int main()
{
    const int MAX_DAYS_SPEND = 5;
    
    double tripPrice;
    cin >> tripPrice;
    double currentMoney;
    cin >> currentMoney;

    string action;
    double amount = 0;
    int spendCounter = 0;
    int days = 0;

    while (currentMoney < tripPrice) {
        cin >> action >> amount;
        days++;
        if (action == "spend") {
            spendCounter++;
            if (spendCounter == MAX_DAYS_SPEND) {
                cout << "You can't save the money." << endl;
                cout << days << endl;
                return 0;
            }
            currentMoney -= (currentMoney > amount ? amount : currentMoney);
        }
        else {
            spendCounter = 0;
            currentMoney += amount;
        }
    }

    cout << "You saved the money for " << days << " days." << endl;

    return 0;
}
