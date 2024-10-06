#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string stringNumber;
    int number;
    int minNumber = INT_MAX;

    while (cin >> stringNumber && stringNumber != "Stop") {
        number = stoi(stringNumber);
        if (number < minNumber) {
            minNumber = number;
        }
    }

    cout << minNumber << endl;

    return 0;
}
