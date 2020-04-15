#include <iostream>
#include <string>

int main() 
{
    struct card
    {
        char suit;
        char value;
    };
    
    std::string input;

    std::cin >> input;

    card played_card, unplayed_card;

    played_card.suit = input[0];
    played_card.value = input[1];

    for (int i = 0; i < 5; i++)
    {
        std::cin >> input;
        unplayed_card.suit = input[0];
        if (unplayed_card.suit == played_card.suit)
        {
            std::cout << "YES";
            return 0;
        }
        unplayed_card.value = input[1];
        if (unplayed_card.value == played_card.value)
        {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout << "NO";
    return 1;
}