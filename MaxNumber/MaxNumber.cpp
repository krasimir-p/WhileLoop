#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
    string stringNumber;
    int maxNumber = INT_MIN;
    int number;

    while (cin >> stringNumber && stringNumber != "Stop") {
        number = stoi(stringNumber);
        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    cout << maxNumber << endl;

    return 0;
}
