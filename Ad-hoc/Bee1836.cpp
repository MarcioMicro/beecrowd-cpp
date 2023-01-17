#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T, Bs[4], IV[4], EV[4];

    cin >> T;
    string P[T];
    int caso[T], L[T], HP[T], AT[T], DF[T], SP[T];

    for (int i=0; i<T; i++) {
        cin >> P[i] >> L[i];
        caso[i] = i+1;
        for (int x=0; x<4; x++)  cin >> Bs[x] >> IV[x] >> EV[x];

        HP[i] = (((IV[0] + Bs[0] + sqrt(EV[0])/8 + 50)*L[i])/50) + 10;
        AT[i] = ((IV[1] + Bs[1] + sqrt(EV[1])/8)*L[i])/50 + 5;
        DF[i] = ((IV[2] + Bs[2] + sqrt(EV[2])/8)*L[i])/50 + 5;
        SP[i] = ((IV[3] + Bs[3] + sqrt(EV[3])/8)*L[i])/50 + 5;

    }

    for (int s=0; s<T; s++) {
        cout << "Caso #" << caso[s] << ": " << P[s] << " nivel " << L[s];
        cout << "\nHP: " << HP[s] << "\nAT: " << AT[s] << "\nDF: " << DF[s] << "\nSP: " << SP[s] << "\n";
    }

    return 0;
}
