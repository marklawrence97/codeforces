#include <iostream>
#include <string>

std::string iterate(std::string order, int length);

int main()
{
    int kids, time;

    std::cin >> kids >> time;
    std::string order;

    std::cin >> order;

    for (int i = 0; i < time; ++i)
    {
        order = iterate(order, kids);
    }

    std::cout << order;
}

std::string iterate(std::string order, int length)
{
    std::string temp;

    temp = "";
    
    int i = 0;

    bool final_swap = false;

    while (i < length - 1)
    {
        if (order[i] == 'B')
        {
            if (order[i + 1] == 'G')
            {
                temp += "GB";
                i += 2;
            }
            else
            {
                temp += "B";
                i += 1;
            }
        }
        else 
        {
            temp += "G";
            i += 1;
        }
    }

    if (temp.length() != length)
    {
        temp += order[length - 1];
    }

    return temp;
} 
