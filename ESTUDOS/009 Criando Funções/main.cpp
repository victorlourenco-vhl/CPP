#include <iostream>

using namespace std;

bool par(int num);
void mensagem();

int main(int argc, char *argv[])
{
    int num;
    cout << "Digite um numero: " << endl;
    cin >> num;
    if(par(num))
        cout << "O numero " << num  << " e par.\n";
    else
        cout << "O numero " << num << " e impar.\n";
    mensagem();
    return 0;
}

bool par(int num)
{
    if (num % 2 == 0)
        return true;
     return false;
}

void mensagem(){
    cout << "Aprendendo C++";
}