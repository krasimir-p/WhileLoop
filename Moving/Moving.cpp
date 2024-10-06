#include <iostream>
#include <string>

using namespace std;

int main()
{
    int width, length, height;
    cin >> width >> length >> height;
    int space = width * length * height;

    string input;
    int cartons = 0;

    while (cin >> input && input != "Done") {
        cartons += stoi(input);
        if (cartons >= space) {
            cout << "No more free space! You need " << cartons - space << " Cubic meters more." << endl;
            return 0;
        }
    }

    cout << space - cartons << " Cubic meters left." << endl;

    return 0;
}
