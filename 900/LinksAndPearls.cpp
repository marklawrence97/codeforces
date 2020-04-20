#include <iostream>
#include <string>

int main()
{
    std::string necklace;
    std::cin >> necklace;
    int link_no, pearl_no;
    link_no = 0;
    pearl_no = 0;

    for (auto c: necklace)
    {
        if (c == '-'){
            link_no += 1;
        }
        else 
        {
            pearl_no += 1;
        }
    }

    if (link_no % pearl_no == 0)
    {
        std::cout << "YES";
    }
    else 
    {
        std::cout << "NO";
    }
}