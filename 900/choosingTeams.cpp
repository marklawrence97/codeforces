#include <iostream>

int main()
    {
        int a, b;
        std::cin >> a >> b;

        int count = 0;

        for (int i = 0; i < a; ++i)
        {
            int input;
            std::cin >> input;
            if (input < 5 - b)
            {
                count += 1;
            }
        }
        
        count /= 3;

        std::cout << count;
    }