#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    while (getline(cin, text) && text != "Stop") {
        cout << text << endl;
    }

    return 0;
}
