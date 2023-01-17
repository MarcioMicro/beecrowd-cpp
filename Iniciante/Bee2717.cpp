#include<iostream>

using namespace std;

int main() {

    int N, A, B;

    cin >> N >> A >> B;

    string resposta = ((A+B) > N) ? "Deixa para amanha!\n" :  "Farei hoje!\n";

    cout << resposta;

}
