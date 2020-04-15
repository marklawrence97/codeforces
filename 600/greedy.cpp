#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    int a, count, bill;

    cin >> a;

    count = 0;

    stack<int> bills; 
    bills.push(1);
    bills.push(5);
    bills.push(10);
    bills.push(20);
    bills.push(100);

    while (a != 0)
    {
        bill = bills.top();
        if (a - bill >= 0)
        {
            a -= bill;
            count += 1;
            continue;
        }
        bills.pop();
    }

    cout << count;
}