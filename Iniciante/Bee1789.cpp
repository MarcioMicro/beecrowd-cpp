#include <iostream>

using namespace std;

int main() {

    int L, nivel, veloc, i;

    while (cin >> L) {
        nivel=0;
        for (i=0; i<L; i++) {
            cin >> veloc;
            if (veloc<10 && veloc/10+1>nivel) nivel = 1;
            else if (veloc>=10 && veloc<20 && veloc/10+1>nivel) nivel = 2;
            else if (veloc>=20 && veloc/10+1>nivel) nivel = 3;
        }
        cout << nivel << endl;
    }

    return 0;
}
