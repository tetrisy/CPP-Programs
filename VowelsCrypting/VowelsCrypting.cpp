#include <iostream>

using namespace std;

string replace(string word);

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "You didn't provide a word. Usage: ./no-vowels word\n";
        return 1;
    }

    cout << replace(argv[1]);

    return 0;
}

string replace(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (tolower(word[i]) == 'a')
        {
            word[i] = '6';
        }
        if (tolower(word[i]) == 'e')
        {
            word[i] = '3';
        }
        if (tolower(word[i]) == 'i')
        {
            word[i] = '1';
        }
        if (tolower(word[i]) == 'o')
        {
            word[i] = '0';
        }
    }
    return word;
}

