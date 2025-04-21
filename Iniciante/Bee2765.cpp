#include <iostream>

using namespace std;

int main() {

    string nomes[10];

    for (int i=0; i<10; i++){
        cin >> nomes[i];
        if (i==2 || i==6 || i==8) cout << nomes[i] << endl;
    }

    return 0;
}
