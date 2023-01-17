#include<iostream>
#include<string>

using namespace std;

string teste(string formula[], string experimento, int T) {
    for (int i=0; i<T; i++) {
        int indice = experimento.find(formula[i]);
        char letra;
        if (indice + formula[i].size() >= experimento.size()) letra = 'A';
        else letra = experimento[indice + formula[i].size()];
        if (indice != -1 && letra >='A' && letra <='Z') return "Abortar";
    }
    return "Prossiga";
}

int main() {

    int N, T, U;
    bool primeiro = true;
    cin >> N;

    while (N--) {
        cin >> T;
        string formula[T];
        for (int i=0; i<T; i++) cin >> formula[i];
        cin >> U;
        string experimento[U];
        for (int i=0; i<U; i++) cin >> experimento[i];

        if (primeiro) primeiro = false; else cout << endl;

        for (int i=0; i<U; i++) {
           cout << teste(formula, experimento[i], T) << endl;
        }
    }

}
