#include<iostream>
#include<sstream>

using namespace std;

int testarSimbolo(string simbolo)
{
    bool teste = true;
    if (simbolo[simbolo.length()-1] == '.')
    {
        simbolo.pop_back();
    }
    for (int i=0; i<simbolo.length(); i++)
    {
        if (simbolo[i]<'A' || simbolo[i]>'z' || simbolo[i]>'Z' && simbolo[i]<'a') return 0;
    }
    return simbolo.length();
}

int main()
{

    string linha, simbolo;
    int soma, qtd, media, tam;

    while (getline (cin, linha))
    {
        qtd = soma = 0;
        stringstream ss(linha);
        while (ss>>simbolo)
        {
            tam = testarSimbolo(simbolo);
            if (tam!=0)
            {
                qtd++;
                soma += tam;
            }
        }
        if (qtd==0) media = 0;
        else media = soma/qtd;
        if (media<=3) cout << 250 << endl;
        else if (media<=5) cout << 500 << endl;
        else cout << 1000 << endl;
    }
}
