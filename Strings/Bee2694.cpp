#include<iostream>

using namespace std;


int main() {

	int N, resposta, a, b, c;
	string linha;
	cin >> N;

	while (N) {
        cin >> linha;

        a = stoi(linha.substr(2,2));
        b = stoi(linha.substr(5,3));
        c = stoi(linha.substr(11,2));

        resposta = a + b + c;

        cout << resposta << endl;
        N--;
	}


	return 0;
}
