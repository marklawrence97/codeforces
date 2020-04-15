#include <iostream>
#include <math.h>

int main()
{
    int m, n, count, last_row;

    std::cin >> m >> n;

    count = 0;

    if (n % 2 == 0)
        while (n > 1){
            count += m;
            n /= 2;
        }
    else {
        while (n > 1){
            count += m;
            n /= 2;
        }
        float height = ceil(float(m) /2 );
        last_row = (m % 2 == 0) ? static_cast<int>(height) : static_cast<int>(height) - 1;
        count += last_row;
    }

    std::cout << count;
}