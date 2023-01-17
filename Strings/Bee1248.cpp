#include<iostream>
#include<algorithm>

using namespace std;

int main() {

    int N, pos;
    bool valido;
    string dieta, cafe, almoco;
    cin >> N;
    cin.get();

    while(N) {
        getline (cin, dieta);
        getline (cin, cafe);
        getline (cin, almoco);
        valido = true;
        for (int i=0; i<cafe.length(); i++) {
            pos=dieta.find(cafe[i]);
            if (pos<dieta.length()) dieta.erase(pos,1);
            else valido = false;
        }
        for (int i=0; i<almoco.length(); i++) {
            pos=dieta.find(almoco[i]);
            if (pos<dieta.length()) dieta.erase(pos,1);
            else valido = false;
        }

        sort(dieta.begin(), dieta.end());

        if(valido) cout << dieta << endl;
        else cout << "CHEATER\n";

        N--;
    }

    return 0;
}
