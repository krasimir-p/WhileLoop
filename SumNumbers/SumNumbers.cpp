#include <iostream>

using namespace std;

int main()
{
    int limit;
    cin >> limit;

    int number, sum=0;

    while (sum < limit && cin >> number) {
        sum += number;
    }

    cout << sum << endl;

    return 0;
}
