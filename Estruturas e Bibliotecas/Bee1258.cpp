#include<iostream>
#include<algorithm>

using namespace std;

struct Camisetas {
        string nome;
        string cor;
        char tamanho;
    };

bool sortNome(Camisetas &a, Camisetas &b) {
   if (a.cor == b.cor) {
        if (a.tamanho == b.tamanho) {
            return a.nome < b.nome;
        }
        return a.tamanho > b.tamanho;
    }
   return a.cor < b.cor;
}

int main() {

    int N;
    bool primeiro=true;

    while (cin >> N && N != 0) {

        if (primeiro==true) primeiro=false;
        else cout << endl;
        cin.get();
        Camisetas Turma[N];
        for (int i=0; i<N; i++) {
            getline(cin, Turma[i].nome);
            cin >> Turma[i].cor >> Turma[i].tamanho;
            cin.get();
        }
        sort(&Turma[0], &Turma[N], sortNome);

        for (int i=0; i<N; i++) {
            cout << Turma[i].cor << " " << Turma[i].tamanho << " " << Turma[i].nome << endl;

        }

    }

	return 0;
}
