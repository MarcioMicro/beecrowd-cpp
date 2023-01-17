#include<iostream>

using namespace std;

int main() {

    int N, total;
    string c1, c2, comb;
    cin >> N;

    while (N) {
        cin >> c1 >> c2;
        total = c1.size() + c2.size();
        comb = "";
        while (comb.size() < total) {
            if (c1 != "") {
                comb += c1[0];
                c1.erase(0,1);
            }
            if (c2 != "") {
                comb += c2[0];
                c2.erase(0,1);
            }
        }
        cout << comb << endl;
        N--;
    }

    return 0;

}
