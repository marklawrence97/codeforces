#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main()
{
    std::string input;
    std::regex rx("(\\d)");
    std::smatch m;
    std::vector<int> numbers;

    std::cin >> input;

    while (regex_search(input, m, rx)) 
    {
        numbers.push_back(std::stoi(m[1]));
        input = m.suffix().str(); 
    }  

    sort(numbers.begin(), numbers.end());

    int length = numbers.size();

    for (int i = 0; i < length - 1; ++i)
    {
        std::cout << numbers[i] << "+";
    }
    std::cout << numbers[length -1];
}