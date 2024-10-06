#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int DETERGENT_FOR_A_DISHE = 5;
    const int DETERGENT_FOR_A_POT = 15;
    const int BOTTLE_DETRGENT_CAPACITY = 750;

    int bottles;
    cin >> bottles;

    string input;
    int loading = 0, dishes = 0, pots = 0, differ = 0;

    while (cin >> input && input != "End") {
        loading++;
        loading % 3 ? dishes += stoi(input) : pots += stoi(input);
        differ = (bottles * BOTTLE_DETRGENT_CAPACITY) - (pots * DETERGENT_FOR_A_POT + dishes * DETERGENT_FOR_A_DISHE);
        if (differ < 0) {
            cout << "Not enough detergent, " << -differ << " ml. more necessary!" << endl;
            return 0;
        }
        else if (differ == 0) {
            break;
        }
    }

    cout << "Detergent was enough!" << endl;
    cout << dishes << " dishes and " << pots << " pots were washed." << endl;
    cout << "Leftover detergent " << differ << " ml." << endl;

    return 0;
}
