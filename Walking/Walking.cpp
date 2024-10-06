#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int HEALTY_STEPS = 10000;

    string input;
    int steps;
    int totalSteps = 0;
  
    while (getline(cin, input) && input != "Going home") {
        steps = stoi(input);
        totalSteps += steps;
        if (totalSteps >= HEALTY_STEPS) {
            cout << "Goal reached! Good job!" << endl;
            return 0;
        }
    }
    
    cin >> steps;
    totalSteps += steps;

    if (totalSteps >= HEALTY_STEPS) {
        cout << "Goal reached! Good job!" << endl;
    }
    else {
        cout << HEALTY_STEPS - totalSteps << " more steps to reach goal." << endl;
    }
    
    return 0;
}
