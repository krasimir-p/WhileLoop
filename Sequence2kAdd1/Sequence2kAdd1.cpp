#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int currentNumber=1;

    while (currentNumber <= n) {
        cout << currentNumber << endl;
        currentNumber = 2 * currentNumber + 1;
    }
    return 0;
}
