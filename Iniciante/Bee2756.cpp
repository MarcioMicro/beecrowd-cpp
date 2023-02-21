#include <iostream>

using namespace std;

int main() {

    char letter[5] = {'A','B','C','D','E'};
    for (int i=0; i<5; i++) {
        for (int j=7-i; j; j--) cout << " ";
        cout << letter[i];
        if (i) {
            for (int j=i*2-1; j; j--) cout << " ";
            cout << letter[i];
        }
        cout << endl;
    }

    for (int i=3; i>=0; i--) {
        for (int j=7-i; j; j--) cout << " ";
        cout << letter[i];
        if (i) {
            for (int j=i*2-1; j; j--) cout << " ";
            cout << letter[i];
        }
        cout << endl;
    }

    return 0;
}
