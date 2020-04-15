#include <iostream>

using namespace std;

int main() 
{
    int n;

    cin >> n;

    if (n < 1)
    {
        cout << "Enter an integer greater than 1!";
        return 1;
    }

    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            cout << "I hate that ";
        }
        else 
        {
            cout << "I love that ";
        }
    }

    if (n % 2 == 1)
    {
        cout << "I hate it";
    }
    else 
    {
        cout << "I love it";
    }
}