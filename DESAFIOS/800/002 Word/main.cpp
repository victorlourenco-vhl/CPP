#include <iostream>

using namespace std;

int main()
{
    string word, newWord = "";
    int upper = 0, lower = 0;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == toupper(word[i]))
            upper++;
        else
            lower++;
    }
    if (upper == lower || lower > upper)
        for (int i = 0; i < word.length(); i++)
            newWord += tolower(word[i]);
    else
        for (int i = 0; i < word.length(); i++)
            newWord += toupper(word[i]);

    cout << newWord;
    return 0;
}