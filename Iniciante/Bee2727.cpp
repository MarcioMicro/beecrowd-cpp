#include <iostream>

using namespace std;

int main() {

    int N;
    string linha;
    char resposta;

    while (cin >> N && cin.get()) {
        while (N--) {
            resposta = 'a';
            getline (cin, linha);
            if (linha[1] == '.') {
                resposta++;
                if (linha[2] == '.') resposta++;
            }
            for (int i=1; i<linha.length(); i++) {
                if (linha[i] == ' ') resposta += 3;
            }
            cout << resposta << endl;
        }


    }

    return 0;
}
