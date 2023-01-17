#include<iostream>
#include<map>

using namespace std;

int main() {

    map <string, string> mapa;
    int N, M;
    string lingua, traducao, nome;

    cin >> N;
    cin.get();

    while (N--) {
        getline (cin, lingua);
        getline (cin, traducao);
        mapa[lingua] = traducao;
    }

    cin >> M;
    cin.get();

    while (M--) {
        getline(cin, nome);
        getline (cin, lingua);
        cout << nome << endl << mapa[lingua] << "\n\n";
    }

    return 0;
}
