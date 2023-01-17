#include<iostream>

using namespace std;

int main() {

    int N;
    string palavra;
    cin >> N;

    while (N) {
        cin >> palavra;

        if (palavra[0] == 'o' && palavra[1] == 'n') cout << 1 << endl;
        else if ((palavra[0] == 'o' || palavra[1] == 'n') && palavra[2] == 'e') cout << 1 << endl;
        else if (palavra[0] == 't' && palavra[1] == 'w') cout << 2 << endl;
        else if ((palavra[0] == 't' || palavra[1] == 'w') && palavra[2] == 'o') cout << 2 << endl;
        else cout << 3 << endl;

        N--;
    }

    return 0;

}
