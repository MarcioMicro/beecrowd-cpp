#include <iostream>

using namespace std;

int main()
{
    for(int i=1 ; i<40 ; i++) {
        cout << "-";
    }
    for(int n=1 ; n<6 ; n++) {
        cout << endl << "|";
        for(int i=1 ; i<38 ; i++) {
        cout << " ";
        }
        cout << "|";
    }
    cout << endl;
    for(int i=1 ; i<40 ; i++) {
        cout << "-";
    }
    cout << endl;

    return 0;
}
