#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string payment;
    double sum=0;

    cout << fixed << setprecision(2);

    while (cin >> payment && payment != "NoMoreMoney") {
        double transformPayment = stod(payment);
        if (transformPayment < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }
        sum += transformPayment;
        cout << "Increase: " << transformPayment << endl;
    }

    cout << "Total: " << sum << endl;

    return 0;
}
