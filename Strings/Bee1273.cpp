#include<iostream>

using namespace std;

string justificar(int dif) {
    string spaces;
    while (dif) {
        spaces += " ";
        dif--;
    }
    return spaces;
}

int main() {

    int N, tam;
    cin >> N;

    while (N!=0) {
        string palavra[N];
        tam = 0;
        for (int i=0; i<N; i++) {
            cin >> palavra[i];
            if (palavra[i].length() > tam) tam = palavra[i].length();
        }
        for (int i=0; i<N; i++) {
            cout << justificar(tam-palavra[i].length()) << palavra[i] << endl;
        }
        cin >> N;
        if (N!=0) cout << endl;
    }

    return 0;
}
