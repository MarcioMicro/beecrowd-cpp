#include<iostream>

using namespace std;


int main()
{

    string linha;
    bool maius;
    while (getline(cin, linha))
    {
        maius = true;
        for (int i=0; i<linha.size(); i++)
        {
            if (linha[i]>='a' && linha[i]<='z' || linha[i]>='A' && linha[i]<='Z')
            {
                if (maius == true) cout << (char) toupper(linha[i]);
                else cout << (char) tolower(linha[i]);
                maius = !maius;

            }
            else cout << linha[i];
        }
        cout << endl;
    }

    return 0;
}
