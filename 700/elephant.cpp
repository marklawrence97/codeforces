#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int distance, count;
    cin >> distance;
    count = 0;
    
    stack<int> steps;
    steps.push(1);
    steps.push(2);
    steps.push(3);
    steps.push(4);
    steps.push(5);

    while (distance != 0)
    {
        if (distance - steps.top() >= 0)
        {
            distance -= steps.top();
            count += 1;
        }
        else 
        {
            steps.pop();
        }
    }

    cout << count;
}