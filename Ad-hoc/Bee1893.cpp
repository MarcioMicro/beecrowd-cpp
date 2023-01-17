#include <iostream>

using namespace std;

int main() {

    int anteontem, ontem;

    cin >> anteontem >> ontem;

    if(ontem <= 2) {
        cout << "nova" << endl;
    }
    if(ontem >= 97) {
        cout << "cheia" << endl;
    }
    if(ontem > 2 and ontem < 97 and ontem < anteontem) {
        cout << "minguante" << endl;
    }
    if(ontem > 2 and ontem < 97 and ontem > anteontem) {
        cout << "crescente" << endl;
    }

    return 0;
}
