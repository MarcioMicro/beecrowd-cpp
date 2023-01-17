#include <iostream>

using namespace std;

int main() {

    int J, I=1;

    for (J=60; J>=0; J-=5) {
        cout << "I=" << I << " J=" << J << endl;
        I+=3;
    }


    return 0;
}
