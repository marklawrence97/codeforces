#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int a, b, c, d, diff;
    int* maximum;

    cin >> a >> b >> c >> d;

    int arr [4] = {a, b, c, d};

    maximum = max_element(arr, arr + 4);

    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != *maximum) 
        {
            diff = *maximum - arr[i];
            cout << diff << " ";
        }
    }
}