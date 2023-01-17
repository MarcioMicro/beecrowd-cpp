#include <iostream>

using namespace std;

int main() {

    int T;

    cin >> T;

    string s[T], r[T];
    int caso[T];

    for (int i=0; i<T; i++) cin >> s[i] >> r[i];

    for (int i=0; i<T; i++) {
        caso[i] = i+1;
        if (s[i]==r[i]) cout << "Caso #" << caso[i] << ": De novo!\n";
        else if (s[i]=="tesoura") {
            if (r[i]=="papel" || r[i]=="lagarto") cout << "Caso #" << caso[i] << ": Bazinga!\n";
            else cout << "Caso #" << caso[i] << ": Raj trapaceou!\n";
        }
        else if (s[i]=="papel") {
            if (r[i]=="pedra" || r[i]=="Spock") cout << "Caso #" << caso[i] << ": Bazinga!\n";
            else cout << "Caso #" << caso[i] << ": Raj trapaceou!\n";
        }
        else if (s[i]=="pedra") {
            if (r[i]=="lagarto" || r[i]=="tesoura") cout << "Caso #" << caso[i] << ": Bazinga!\n";
            else cout << "Caso #" << caso[i] << ": Raj trapaceou!\n";
        }
        else if (s[i]=="lagarto") {
            if (r[i]=="Spock" || r[i]=="papel") cout << "Caso #" << caso[i] << ": Bazinga!\n";
            else cout << "Caso #" << caso[i] << ": Raj trapaceou!\n";
        }
        else if (s[i]=="Spock") {
            if (r[i]=="tesoura" || r[i]=="pedra") cout << "Caso #" << caso[i] << ": Bazinga!\n";
            else cout << "Caso #" << caso[i] << ": Raj trapaceou!\n";
        }
    }

    return 0;
}
