#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    int num, fat = 1;

    cout << "Digite um numero: ";
    cin >> num;

    for(int i = 1; i < num;){
        fat = fat * ++i;
    }
    cout << "Fatorial: " << fat << endl;
}