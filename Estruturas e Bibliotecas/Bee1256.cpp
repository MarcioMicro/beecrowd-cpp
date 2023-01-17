#include<iostream>
#include<vector>

using namespace std;


int main() {

	int N;
	cin >> N;

	while (N) {

        int M, C;
        cin >> M >> C;
        vector <int> HASH[M];
        vector <int>::iterator it;
        int chave[C], pos;

        for (int i=0; i<C; i++) {
            cin >> chave[i];
            pos = chave[i]%M;
            HASH[pos].push_back(chave[i]);
        }

        for (int i=0; i<M; i++) {
            cout << i << " -> ";
            for (it=HASH[i].begin(); it!=HASH[i].end(); it++) {
                cout << *it << " -> ";
            }
            cout << "\\" << endl;
        }


        N--;
        if(N) cout << endl;
	}


	return 0;
}
