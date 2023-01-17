#include<iostream>

using namespace std;

int main() {

    int bolasDeNeve[9], soma=0;
    string rena[9] = {"Rudolph", "Dasher", "Dancer", "Prancer", "Vixen", "Comet", "Cupid", "Donner", "Blitzen"};

    for (int i=0; i<9; i++) {
        cin >> bolasDeNeve[i];
        soma += bolasDeNeve[i];
    }

    cout << rena[soma%9] << endl;
}
