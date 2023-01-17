#include <iostream>

using namespace std;

int main() {

    for (int i=1 ; i < 40 ; i++) { //1
        cout << "-";
    }
    cout << endl << "|x = 35";

    for (int i=8 ; i < 39 ; i++) { //2
        cout << " ";
    }
    cout << "|" << endl << "|";

    for (int i=2 ; i < 39 ; i++) { //3
        cout << " ";
    }
    cout << "|" << endl << "|";

    for (int i=2 ; i < 17 ; i++) { //4
        cout << " ";
    }
    cout << "x = 35";

    for (int i=23; i < 39; i++) { //4
        cout << " ";
    }
    cout << "|" << endl << "|";

    for (int i=2 ; i < 39 ; i++) { //5
        cout << " ";
    }
    cout << "|" << endl << "|";

    for (int i=1; i < 32; i++) { //6
        cout << " ";
    }
    cout << "x = 35|" << endl;

    for (int i=1 ; i < 40 ; i++) { //7
        cout << "-";
    }
    cout << endl;

    return 0;
}
