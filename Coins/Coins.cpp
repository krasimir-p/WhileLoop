#include <iostream>

using namespace std;

int main()
{
    double rest;
    cin >> rest;

    int cents = static_cast<int>(rest * 100);
    int coins = 0;

    while (cents > 0) {
        if (cents >= 200) {
            coins++;
            cents -= 200;
        }
        else if (cents >= 100) {
            coins++;
            cents -= 100;
        }
        else if (cents >= 50) {
            coins++;
            cents -= 50;
        }
        else if (cents >= 20) {
            coins++;
            cents -= 20;
        }
        else if (cents >= 10) {
            coins++;
            cents -= 10;
        }
        else if (cents >= 5) {
            coins++;
            cents -= 5;
        }
        else if (cents >= 2) {
            coins++;
            cents -= 2;
        }
        else {
            coins++;
            cents -= 1;
        }
    }

    cout << coins << endl;

    return 0;
}
