#include <iostream>

int gcd(int a, int b)
{
    for (int i = a; i > 0; --i)
    {
        if (a % i == 0)
        {
            if (b % i == 0)
            {
                return i;
            }
        }
    }
    return 1;
}

int lcm(int a, int b)
{
    for (int i = a; true; ++i)
    {
        if (i % a == 0)
        {
            if (i % b == 0)
            {
                return i;
            }
        }
    }
}

main() 
{
    int n;

    std::cin >> n;

    int cases[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> cases[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool equal = false;
        for (int j = 1; j < cases[i] && !equal; ++j)
        {
            for (int k = 1; k < cases[i]; ++k)
                if (gcd(j,k) + lcm(j,k) == cases[i])
                {
                    std::cout << j << " " << k << "\n";
                    equal = true;
                    break;
                }
        }
    }
}
