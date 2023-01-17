#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    int X[N] , Y[N] , somaX[N];

    for (int i=0; i<N; i++) {
        cin >> X[i] >> Y[i];
        if (X[i] > Y[i]) {     //tornar X sempre menor valor
            X[i] = X[i] + Y[i];
            Y[i] = X[i] - Y[i];
            X[i] = X[i] - Y[i];
        }
        if (X[i] % 2 == 0) X[i]++;    //determinar o primeiro ímpar depois do X digitado
        else X[i] += 2;
    }

    for (int i=0; i<N; i++) {
        somaX[i] = 0;
        for (X[i]; X[i]<Y[i]; X[i]+=2) somaX[i] += X[i];
        cout << somaX[i] << endl;
    }



    return 0;
}
