#include<iostream>

using namespace std;

int main() {

    int N;
    string palavra;
    cin >> N;

    while (N) {
        cin >> palavra;
        if (palavra.length() == 3) {
            if (palavra[0] == 'O' && palavra[1] == 'B') cout << "OBI";
            else if (palavra[0] == 'U' && palavra[1] == 'R') cout << "URI";
            else cout << palavra;
        }
        else cout << palavra;

        N--;
        if (N) cout << " ";
    }
    cout << endl;

    return 0;
}
