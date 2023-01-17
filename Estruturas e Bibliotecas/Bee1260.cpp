#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main() {
    map <string, int> mapaEspecies;
    map <string, int>::iterator it;

    int N;
    double cont;
    string linha;
    cin >> N;
    cin.get();
    cin.get();

    while(N--) {
        while(getline(cin, linha) && linha != "") {
            mapaEspecies[linha]++;
            cont++;
        }
        for (it=mapaEspecies.begin(); it!=mapaEspecies.end(); it++) {
            cout << fixed << setprecision(4) << it->first << " " << (it->second / cont)*100 << endl;

        }
        if (N>0) cout << endl;
        mapaEspecies.clear();
        cont = 0;
    }


	return 0;
}
