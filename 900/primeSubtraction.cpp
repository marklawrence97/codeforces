#include <iostream>
#include <math.h>

int main()
{
    int cases;

    for (int i = 0; i < cases; ++i)
    {
        long long a, b;

        std::cin >> a >> b;

        if (abs(a-b) > 1)
        {
            std::cout << "YES";
        } 
        else 
        {
            std::cout << "NO";
        }
    }
}