#include<iostream>
#include<cmath>

using namespace std;

int main() {

    int A[3], D, menor;
    cin >> A[0] >> A[1] >> A[2];

    for (int i=0; i<3; i++) {
        D = 0;
        for (int j=0; j<3; j++) {
            D += A[j] * abs(i-j) * 2;
        }
        if (i==0) menor = D;
        else {
            if (menor > D) menor = D;
        }
    }

    cout << menor << endl;


    return 0;
}
