#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int LAST_CLASS = 12;

    string name;
    cin >> name;

    int currentClass = 1;
    double assessment;
    double sumAssessment = 0;
    int fails = 0;

    while (currentClass <= LAST_CLASS) {
        cin >> assessment;
        if (assessment < 4) {
            fails++;
            if (fails == 2) {
                cout << name << " has been excluded at " << currentClass << " grade" << endl;
                return 0;
            }
        }
        else {
            sumAssessment += assessment;
            currentClass++;
        }
    }
    
    double averageAssessment = sumAssessment / LAST_CLASS;
    
   cout << fixed << setprecision(2);
   cout << name << " graduated. Average grade: " << averageAssessment << endl;

    return 0;
}
