#include <iostream>
#include <string>

using namespace std;

main()
{
    int words;

    cin >> words;

    string wordArray[words];

    for (int i = 0; i < words; i++)
    {
        string word;

        cin >> word;

        wordArray[i] = word;
    }

    for (int i = 0; i < words; i++)
    {
        if (wordArray[i].length() > 10)
        {   
            int count;
            count = 0;
            cout << wordArray[i][0];
            for (int j = 1; j < wordArray[i].length() - 1; ++j)
            {
                count += 1;
            }
            cout << count << wordArray[i][wordArray[i].length() - 1];
        }
        else 
        {
            cout << wordArray[i];
        }

        cout << '\n';
    }
}