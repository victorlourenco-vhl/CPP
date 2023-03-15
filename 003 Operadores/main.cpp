#include <iostream>

using namespace std;

int main()
{
    int n, n1, n2, soma, subtracao, modulo;
    float divisao;

    n = 1;
    n1 = 10;
    n2 = 20;
    soma = n1 + n2;
    modulo  = n1 % n2;
    divisao = (float) n1 / n2;

    soma = 2 + ++n;
    divisao = 10 + 20 / 2;

    cout << n++ << endl;
    n = 1;
    cout << ++n << endl;
    cout << soma << endl;
    cout << modulo << endl;
    cout << divisao << endl;

    return 0;
}