#include <iostream>

using namespace std;

int main() {

    string corvo;
    int soma, gritos=0;

    while (gritos < 3) {
        soma = 0;
        corvo = "---";
        while (corvo!="caw caw") {
            if(corvo == "--*") soma += 1;
            if(corvo == "-*-") soma += 2;
            if(corvo == "-**") soma += 3;
            if(corvo == "*--") soma += 4;
            if(corvo == "*-*") soma += 5;
            if(corvo == "**-") soma += 6;
            if(corvo == "***") soma += 7;
            getline(cin, corvo);
            //cout << soma << "\n";
        }
        cout << soma << endl;
        gritos++;
    }

    return 0;
}
