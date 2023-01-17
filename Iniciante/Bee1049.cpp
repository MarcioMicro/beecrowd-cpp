#include <iostream>

using namespace std;

int main() {

    string a, b, c;

    cin >> a >> b >> c;

    if (a== "vertebrado") {
        if (b=="ave"){
            if (c=="carnivoro") {
                cout << "aguia" << endl;
            }
            if (c=="onivoro"){
                cout << "pomba" << endl;
            }
        }
        if (b=="mamifero") {
            if (c=="onivoro") {
                cout << "homem" << endl;
            }
            if (c=="herbivoro"){
                cout << "vaca" << endl;
            }
        }

    }
    if (a== "invertebrado") {
        if (b=="inseto"){
            if (c=="hematofago") {
                cout << "pulga" << endl;
            }
            if (c=="herbivoro"){
                cout << "lagarta" << endl;
            }
        }
        if (b=="anelideo") {
            if (c=="hematofago") {
                cout << "sanguessuga" << endl;
            }
            if (c=="onivoro"){
                cout << "minhoca" << endl;
            }
        }

    }


    return 0;
}
