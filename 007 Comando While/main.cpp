#include <iostream>

using namespace std;

int main(){
    int n = 1;

    while (n <= 10){
        int i = 0;
        while(i < 3){
            cout << "Numero: " << n << endl;
            i++;
        }
        n++;
    }

    return 0;
}