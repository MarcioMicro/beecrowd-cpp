#include <iostream>

using namespace std;

int main() {

    int largura = 39;
    int altura = 7;
    char simbolo1 = '-';
    char simbolo2 = '|';
    char grade[altura][largura];
    string nome = "Roberto", codigo = "5786", inst = "UNIFEI";

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            if (i==0 || i==altura-1) grade[i][j] = simbolo1;
            else {
                if (j==0 || j==largura-1) grade[i][j] = simbolo2;
                else grade[i][j] = ' ';
            }
        }
    }

    for (int i=9, j=0; i<9+nome.size(); i++, j++) grade[1][i] = nome[j];
    for (int i=9, j=0; i<9+codigo.size(); i++, j++) grade[3][i] = codigo[j];
    for (int i=9, j=0; i<9+inst.size(); i++, j++) grade[5][i] = inst[j];

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            cout << grade[i][j];
        }
        cout << endl;
    }

    return 0;
}
