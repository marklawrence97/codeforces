#include <iostream>
#include <cstdlib>

int main()
{
    int a, distance;
    int arr [5][5];

    distance = 0;

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (arr[i][j] == 1)
            {
                distance += abs(2-i) + abs(2-j);
                std::cout << distance;
                return 0;
            }
        }
    }

    return 1;
}