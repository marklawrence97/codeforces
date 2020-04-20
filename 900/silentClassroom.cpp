#include <iostream>
#include <unordered_map>
#include <string>
#include <math.h>

int binomialCo(int n, int k);
int factorial(int i);

int main()
{
    int n;

    std::cin >> n;

    std::unordered_map<char, int> names;

    for (int i = 0; i < n; ++i)
    {
        std::string input;
        std::cin >> input;

        try
        {
            names[input[0]] += 1;
        }
        catch(...)
        {
            names[input[0]] = 1;
        }
    }

    int pairs = 0;

    for (auto name: names)
    {
        if (name.second == 3)
        {
            pairs += 1;
        }

        if (name.second > 3)
        {
            float val = float(name.second) / float(2);
            int value = std::floor(val);
            pairs += binomialCo(value, 2);
            pairs += binomialCo(name.second - value, 2);
        }
    }

    std::cout << pairs;
}

int binomialCo(int n, int k)
{
    return (factorial(n) / factorial(k)*(factorial(n-k)) );
}

int factorial(int i)
{
    if (i == 0 || i == 1)
    {
        return 1;
    }
    return i*(i-1);
}