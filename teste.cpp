#include <iostream>
#include <cmath>

using namespace std;

void decomposicao(int valorT){

    int recebe100 = valorT/100;
    int recebe50 = (valorT % 100)/50;
    int recebe20 = ((valorT % 100) % 50) / 20;
    int recebe10 = (((valorT % 100) %50) %20)/10;
    int recebe5 = ((((valorT %100)%50)%20)%10)/5;
    int recebe2 = (((((valorT%100)%50)%20)%10)%5)/2;
    int recebe1 = (((((valorT%100)%50)%20)%10)%5)%2;

    cout << valorT << endl;
    cout << recebe100 <<" nota(s) de R$ 100,00\n";
    cout << recebe50 <<" nota(s) de R$ 50,00\n"; 
    cout << recebe20 <<" nota(s) de R$ 20,00\n";
    cout << recebe10 <<" nota(s) de R$ 10,00\n";
    cout << recebe5 << " nota(s) de R$ 5,00\n";
    cout << recebe2 << " nota(s) de R$ 2,00\n";
    cout << recebe1 << " nota(s) de R$ 1,00";
    }

int main()
{
    int valor;
    cin >> valor;
    decomposicao(valor);
    return 0;
}
