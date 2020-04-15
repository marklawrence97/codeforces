#include <iostream>
#include <string>
#include <regex>

int main() 
{
    std::string input;

    std::cin >> input;

    std::regex r("([a-zA-Z])([a-zA-Z])");
    std::smatch matches;

    if (std::regex_search(input, matches, r)) 
    {
        std::cout << matches.size();
        std::cout << "The whole match is: " << matches.str(0);

        for (int i = 1; i < matches.size(); ++i)
        {
            std::cout << matches.str(i) << matches.str(2) << matches.str(3);
        }
    }
}