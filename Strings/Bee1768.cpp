#include<iostream>

using namespace std;

int main() {

    int N;

    while (cin >> N) {

        for (int i=1, j=N/2; i<=N; i+=2, j--) {
            for (int k=j; k>0; k--) cout << " ";
            for (int k=1; k<=i; k++) cout << "*";
            cout << endl;
        }
        for (int i=N/2; i>0; i--) cout << " ";
        cout << "*\n";
        for (int i=N/2-1; i>0; i--) cout << " ";
        cout << "***\n\n";
    }

    return 0;

}
