#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double n1, n2, n3, n4, media, exame, notafinal;

    cin >> n1 >> n2 >> n3 >> n4;

    media = n1*2/10 + n2*3/10 + n3*4/10 + n4*1/10;

    cout <<fixed << setprecision(1) << "Media: " << media << endl;

    if (media >= 7.0) {

        cout << "Aluno aprovado." << endl;

    }

    else if (media < 5.0) {

        cout << "Aluno reprovado." << endl;

    }

    else {

        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;
        notafinal = (media + exame)/2;

        if (notafinal >= 5.0) {

            cout << "Aluno aprovado." << endl;

        }

        else {

            cout << "Aluno reprovado." << endl;

        }

        cout <<fixed << setprecision(1) << "Media final: " << notafinal << endl;

    }

    return 0;
}
