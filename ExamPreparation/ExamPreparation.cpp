#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    const int MAX_UNPLEASURE_GRADE = 4;

    int unpleasureGradesNumber;
    cin >> unpleasureGradesNumber;
    
    string taskName;
    string lastTaskName;
    double averageGrade = 0;
    double sumGrade = 0;
    int gradesNumber = 0;
    int currentGrade;
    int fails = 0;
    
    while (true) {
        cin.ignore();
        getline(cin, taskName);
        if (taskName == "Enough") {
            cout << "Average score: " << fixed << setprecision(2) << averageGrade << endl;
            cout << "Number of problems: " << gradesNumber << endl;
            cout << "Last problem: " << lastTaskName << endl;
            return 0;
        }
        else {
            cin >> currentGrade;
            if (currentGrade <= MAX_UNPLEASURE_GRADE) {
                fails++;
                if (unpleasureGradesNumber==fails) {
                    cout << "You need a break, " << unpleasureGradesNumber << " poor grades." << endl;
                    return 0;
                }
            }
            sumGrade += currentGrade;
            gradesNumber++;
            averageGrade = sumGrade / gradesNumber;
            lastTaskName = taskName;
        }

    }
}
