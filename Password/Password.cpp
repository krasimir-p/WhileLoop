#include <iostream>

using namespace std;

int main()
{
    string name, password;
    cin >> name;
    cin >> password;

    string attempt;

    while (cin >> attempt && attempt != password) {}

    cout << "Welcome " << name << "!" << endl;
    return 0;
}
