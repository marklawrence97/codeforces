#include <iostream>
#include <string>

int main()
{
    std::string number, returnval;

    std::cin >> number;

    returnval = "YES";

    for (int i = 0; i < number.length(); ++i)
    {
        if (number[i] != '4' && number[i] != '7')
        {
            returnval = "NO";
        }
    }

    int num = std::stoi(number);

    if (num % 4 == 0 || num % 7 == 0 || num % 47 == 0)
    {
        returnval = "YES";
    }

    std::cout << returnval;
}