#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cin >> str;

    if (str[0] == '-')
    {
        int length = str.length();
        if (length > 2 && (str[length - 2] != '0' && str[length - 1] != '0'))
        {
            for (int i = 0; i < length - 2; ++i)
            {
                std::cout << str[i];
            }
            if (str[length-2] > str[length-1])
            {
                std::cout << str[length-1];
            }
            else 
            {
                std::cout << str[length-2];
            }
        }
        else 
        {
            std::cout << '0';
        }
    }
    else
    {
        std::cout << str;
    }
}