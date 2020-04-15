#include <iostream>
#include <deque>
#include <queue>

int main() 
{
    int card_no, serja_score, dima_score;

    std::cin >> card_no;

    std::deque<int> cards;
    std::queue<bool> serejas_turn;

    serja_score = 0;
    dima_score = 0;

    for (int i = 0; i < card_no; ++i)
    {
        int input;
        std::cin >> input;
        cards.push_back(input);
        if (i % 2 == 0)
        {
            serejas_turn.push(true);
        }
        else 
        {
            serejas_turn.push(false);
        }
    }

    while (cards.size() > 0)
    {
        if (cards.front() >= cards.back())
        {
            if (serejas_turn.front())
            {
                serja_score += cards.front();
            }
            else
            {
                dima_score += cards.front();
            }
            cards.pop_front();
        }
        else
        {
            if (serejas_turn.front())
            {
                serja_score += cards.back();
            }
            else
            {
                dima_score += cards.back();
            }
            cards.pop_back();
        }
        serejas_turn.pop();
    }

    std::cout << serja_score << " " << dima_score;
}