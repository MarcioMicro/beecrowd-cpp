#include <iostream>

using namespace std;

int main() {

    int largura = 39;
    int altura = 7;
    char simbolo1 = '-';
    char simbolo2 = '|';
    char grade[altura][largura];
    string texto = "x = 35";

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            if (i==0 || i==altura-1) grade[i][j] = simbolo1;
            else {
                if (j==0 || j==largura-1) grade[i][j] = simbolo2;
                else grade[i][j] = ' ';
            }
        }
    }

    for (int i=1, j=0; i<1+texto.size(); i++, j++) grade[1][i] = texto[j];
    for (int i=16, j=0; i<16+texto.size(); i++, j++) grade[3][i] = texto[j];
    for (int i=32, j=0; i<32+texto.size(); i++, j++) grade[5][i] = texto[j];

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            cout << grade[i][j];
        }
        cout << endl;
    }

    return 0;
}
