#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>

int main() 
{
    std::string input_string;
    int count_upper, count_lower;
    
    std::cin >> input_string;

    count_upper = 0;
    count_lower = 0;

    for (int i = 0; i < input_string.length(); ++i)
    {
        if (isupper(input_string[i]))
        {
            count_upper += 1;
        }
        else 
        {
            count_lower += 1;
        }
    }

    if (count_upper > count_lower) 
    {
        std::transform(input_string.begin(), input_string.end(), input_string.begin(), ::toupper);
        std::cout << input_string;
    }
    else {
        std::transform(input_string.begin(), input_string.end(), input_string.begin(), ::tolower);
        std::cout << input_string;
    }
}