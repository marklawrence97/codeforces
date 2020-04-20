#include <iostream>
#include <algorithm>

int main()
{
    int coins_no, my_total, brothers_total;

    std::cin >> coins_no;

    int coins[coins_no];
    
    my_total = 0;
    brothers_total = 0;

    for (int i = 0; i < coins_no; ++i)
    {
        std::cin >> coins[i];
        brothers_total += coins[i];
    }

    std::sort(coins, coins + coins_no, std::greater<int>());

    int i = 0;
    int number_needed = 0;

    while (my_total <= brothers_total)
    {
        my_total += coins[i];
        brothers_total -= coins[i];
        i += 1;
        number_needed += 1;
    }

    std::cout << number_needed;
}