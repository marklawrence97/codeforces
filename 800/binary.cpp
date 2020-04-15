#include <iostream>

int main() 
{
    int n, no_of_zeros;
    no_of_zeros = 0;

    std::cin >> n;

    char input[n];

    std::cin >> input;

    for (auto x: input)
    {
        if (x == '0')
        {
            no_of_zeros += 1;
        }
    }

    if (no_of_zeros == n) {
        std::cout << '0';
    }
    else
    {
        std::cout << '1';
        for (int i = 0; i < no_of_zeros; i++)
        {
            std::cout << '0';
        }
    }
}