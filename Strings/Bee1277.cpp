#include<iostream>

using namespace std;

int main()
{

    int T, N;
    bool primeiro;
    double P, A;
    cin >> T;
    while (T) {
        cin >> N;
        string nome[N], freq[N];
        for(int i=0; i<N; i++) cin >> nome[i];
        primeiro = true;
        for(int i=0; i<N; i++) {
            cin >> freq[i];
            P = A = 0;

            for (int j=0; j<freq[i].length(); j++) {
                if (freq[i][j]=='P') P++;
                if (freq[i][j]=='A') A++;
            }

            if (A/(P+A) > 0.25) {
                if (primeiro) {
                    cout << nome[i];
                    primeiro = false;
                }
                else cout << " " << nome[i];

            }
        }
        cout << endl;

        T--;
    }

    return 0;
}
