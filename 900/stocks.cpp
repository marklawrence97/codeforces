#include <iostream>

int main()
{
    int buy_no, sell_no, bourles, cheapest, most_expensive;
    std::cin >> buy_no >> sell_no >> bourles;

    int first_stock;

    std::cin >> first_stock;
    cheapest = first_stock;
    most_expensive = 0;

    for (int i = 1; i < buy_no; ++i)
    {
        int value;
        std::cin >> value;

        if (value <= cheapest)
        {
            cheapest = value;
        }
    }

    for (int j = 0; j < sell_no; ++j)
    {
        int value;
        std::cin >> value;

        if (value >= most_expensive)
        {
            most_expensive = value;
        }
    }

    int net;

    if (cheapest < most_expensive)
    {
        int number_bought = bourles / cheapest;
        net = number_bought * most_expensive + bourles % (number_bought * cheapest);
    }
    else 
    {
        net = bourles;
    }

    std::cout << net;
}