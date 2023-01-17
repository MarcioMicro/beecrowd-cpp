#include <iostream>

using namespace std;

int main() {

    int T, TP=0, JP=0;
    string J;
    cin >> J;

    while (J!="ABEND") {
        if (J == "SALIDA") {
            cin >> T;
            JP++;
            TP += T;
        }
        else if (J == "VUELTA") {
            cin >> T;
            JP--;
            TP -= T;
        }
        cin >> J;
    }

    cout << TP << endl << JP << endl;

    return 0;
}
