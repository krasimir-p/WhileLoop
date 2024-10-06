#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wantedBook;
    getline(cin, wantedBook);

    string currentBook;
    int countBooks = 0;

    while (getline(cin, currentBook) && currentBook != wantedBook) {
        if (currentBook == "No More Books") {
            cout << "The book you search is not here!" << endl;
            cout << "You checked " << countBooks << " books." << endl;
            return 0;
        }
        else {
            countBooks++;
        }
    }

    cout << "You checked " << countBooks << " books and found it." << endl;

    return 0;
}
