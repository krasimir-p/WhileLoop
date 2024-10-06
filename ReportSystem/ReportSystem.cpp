#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int CACHE_MAX_LIMIT = 100;
    const int CARD_MIN_LIMIT = 10;

    int desiredSum;
    cin >> desiredSum;

    string input;
    int payment = 0, sumCachePayments = 0, sumCardPayments = 0;
    int cachePaymentsNumber = 0, cardPaymentsNumber = 0;
    bool paymentOdd = false;

    while (true) {
        cin >> input;
        if (input == "End") {
            cout << "Failed to collect required money for charity." << endl;
            return 0;
        }
        payment = stoi(input);
        paymentOdd = !paymentOdd;

        if(paymentOdd){
            if (payment > 100) {
                cout << "Error in transaction!" << endl;
            }
            else {
                cout << "Product sold!" << endl;
                sumCachePayments += payment;
                cachePaymentsNumber++;
                    if (sumCachePayments + sumCardPayments >= desiredSum) {
                        break;
                    }
            }
        }
        else {
            if (payment < 10) {
                cout << "Error in transaction!" << endl;
            }
            else {
                cout << "Product sold!" << endl;
                sumCardPayments += payment;
                cardPaymentsNumber++;
                if (sumCachePayments + sumCardPayments >= desiredSum) {
                    break;
                }
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "Average CS: " << static_cast<double>(sumCachePayments) / cachePaymentsNumber << endl;
    cout << "Average CC: " << static_cast<double>(sumCardPayments) / cardPaymentsNumber << endl;

    return 0;
}
