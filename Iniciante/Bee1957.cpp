#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int V, testeTamanho, tamVetor=0, conv;
    cin >> V;
    testeTamanho = V;

    while (testeTamanho>0) {

        testeTamanho /= 16;
        tamVetor++;
    }

    char vetorV[tamVetor];

    for (int i=tamVetor-1; i>=0; i--) {
        conv = V%16;
        switch (conv) {
            case 0:
                vetorV[i] = '0';
                break;
            case 1:
                vetorV[i] = '1';
                break;
            case 2:
                vetorV[i] = '2';
                break;
            case 3:
                vetorV[i] = '3';
                break;
            case 4:
                vetorV[i] = '4';
                break;
            case 5:
                vetorV[i] = '5';
                break;
            case 6:
                vetorV[i] = '6';
                break;
            case 7:
                vetorV[i] = '7';
                break;
            case 8:
                vetorV[i] = '8';
                break;
            case 9:
                vetorV[i] = '9';
                break;
            case 10:
                vetorV[i] = 'A';
                break;
            case 11:
                vetorV[i] = 'B';
                break;
            case 12:
                vetorV[i] = 'C';
                break;
            case 13:
                vetorV[i] = 'D';
                break;
            case 14:
                vetorV[i] = 'E';
                break;
            case 15:
                vetorV[i] = 'F';
                break;
        }
        V /= 16;
    }

    for (int i=0; i<tamVetor; i++) cout << vetorV[i];

    cout << endl;


    return 0;
}
