#include <iostream>

using namespace std;

int main() {

    int largura = 39;
    int altura = 7;
    char simbolo1 = '-';
    char simbolo2 = '|';

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            if (i==0 || i==altura-1) cout << simbolo1;
            else {
                if (j==0 || j==largura-1) cout << simbolo2;
                else cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
