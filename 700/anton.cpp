#include <iostream>
#include <cstring>

using namespace std;

main()
{
    int rounds;
    char * results = new char [rounds + 1];
    int anton_score, danik_score;

    anton_score = 0;
    danik_score = 0;

    cin >> rounds >> results;

    for (int i = 0; i < rounds; ++i)
    {
        if (results[i] == 'A')
        {
            anton_score += 1;
        }
        else 
        {
            danik_score += 1;
        }
    }

    if (anton_score > danik_score)
    {
        cout << "Anton";
    }
    else if (anton_score < danik_score)
    {
        cout << "Danik";
    } 
    else 
    {
        cout << "Friendship";
    }
}