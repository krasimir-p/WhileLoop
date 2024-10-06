#include <iostream>
#include <string>

using namespace std;

int main()
{
    int width, length;
    cin >> width >> length;
    int allPieces = width * length;

    string input;
    int takenPieces = 0;
    
    while (cin >> input && input != "STOP") {
        takenPieces += stoi(input);
        if (takenPieces >= allPieces) {
            cout << "No more cake left! You need " << takenPieces - allPieces << " pieces more." << endl;
            return 0;
        }
    }

    cout << allPieces - takenPieces << " pieces are left." << endl;
    
    return 0;
}
