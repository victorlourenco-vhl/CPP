#include <iostream>

using namespace std;

int main()
{
    int x = 0, step = 0, rest = 0;
    cin >> x;
    rest = x;

    while (rest != 0)
    {
        if (rest >= 5)
        {
            step += rest / 5;
            rest = rest % 5;
        }
        else if (rest >= 4)
        {
            step += rest / 4;
            rest = rest % 4;
        }
        else if (rest >= 3)
        {
            step += rest / 3;
            rest = rest % 3;
        }
        else if (rest >= 2)
        {
            step += rest / 2;
            rest = rest % 2;
        }
        else if (rest == 1)
        {
            rest = 0;
            step++;
        }
    }
    cout << step << endl;
    return 0;
}