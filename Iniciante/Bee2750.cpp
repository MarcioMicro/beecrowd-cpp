#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string numero(int n, int base) {
    stringstream ss;
    string teste;
    if (base==10) ss << n;
    else if (base==8) ss << oct << n;
    else ss << hex << uppercase << n;
    ss >> teste;
    if (teste.size() == 1) teste = " " + teste;
    return teste;
}

int main() {

    int largura = 39, altura = 20;
    char simbolo1 = '-', simbolo2 = '|';
    char grade[altura][largura];

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) {
            if (i==0 || i==2 || i==altura-1) grade[i][j] = simbolo1;
            else {
                if (j==0 || j==12 || j==22 || j==largura-1) grade[i][j] = simbolo2;
                else grade[i][j] = ' ';
            }
        }
    }

    string t1 = "decimal", t2 = "octal", t3 = "Hexadecimal";

    for (int i=3, j=0; i<3+t1.size(); i++, j++) grade[1][i] = t1[j];
    for (int i=15, j=0; i<15+t2.size(); i++, j++) grade[1][i] = t2[j];
    for (int i=25, j=0; i<25+t3.size(); i++, j++) grade[1][i] = t3[j];

    int N[16] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    string stringNumero;

    for (int i=0; i<16; i++) {
        stringNumero = numero(N[i], 10);
        grade[i+3][6] = stringNumero[0];
        grade[i+3][7] = stringNumero[1];
    }

    for (int i=0; i<16; i++) {
        stringNumero = numero(N[i], 8);
        grade[i+3][16] = stringNumero[0];
        grade[i+3][17] = stringNumero[1];
    }

    for (int i=0; i<16; i++) {
        stringNumero = numero(N[i], 16);
        grade[i+3][29] = stringNumero[0];
        grade[i+3][30] = stringNumero[1];
    }

    for (int i=0; i<altura; i++) {
        for (int j=0; j<largura; j++) cout << grade[i][j];
        cout << endl;
    }

    return 0;
}
